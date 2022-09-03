#include <stdlib.h>

using namespace std;

template <typename Type>
class CVector
{
    private:
        Type *m_pVect;
        int m_nCount;
        int m_nMax;
        int m_nDelta;
        void Resize();
    public:
        CVector(int delta = 10);
        void Insert(Type elem); 
};

template <typename Type>
CVector<Type>::CVector(int delta)
{
    m_nCount = 0;
    m_nMax = 0;
    m_nDelta = delta;
    m_pVect = (Type *)malloc(sizeof(int) * 0);
}

template <typename Type>
void
CVector<Type>::Insert(Type elem)
{
    if( m_nCount == m_nMax )
        Resize();
    m_pVect[m_nCount++] = elem;
}

template <typename Type>
void
CVector<Type>::Resize()
{
    m_pVect = (int*) realloc(m_pVect, sizeof(int) * (m_nCount + m_nDelta));
    m_nMax += m_nDelta;
}

int 
main()
{
    CVector<int> vc1(10);
    vc1.Insert(9);
}