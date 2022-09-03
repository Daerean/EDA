#include <iostream>
#include <list>
#include <vector>

using namespace std;

namespace foo {
    float pi = 3.14;
    int gf = 9;
    int age = 19;

    int fibo(int a)
    {
        if (a == 1 || a == 0)
            return 1;

        return fibo(a - 1) + fibo(a - 2);
    }

    class CMyComplexDataStructure {
        vector<float> m_container;

        public:
        void Insert(float fVal) 
        {
            m_container.push_back(fVal); 
        }

        template <typename objclass>
        void sumone(objclass funobj)
        {
            vector<float>::iterator iter = m_container.begin();
            for (; iter != m_container.end() ; iter++)
                funobj(*iter);
        }
    }; 
}

int
main()
{
    cout << foo::pi << endl;
    cout << foo::gf << endl;
    cout << foo::age << endl;
    cout << foo::fibo(20) << endl;
    foo::CMyComplexDataStructure a;
    a.Insert(123123);
    a.Insert(1233);
    a.Insert(1123);
}