#include <iostream>
using namespace std;


class A
{
    public:
        int x;
        virtual void func() 
        {
            cout << x <<"class A\n";
        }
};

class B: public A
{
    public:
        int y;
        void func()
        {
            z=20;
            cout  << z << "\n" <<"class B\n";
        }
        void set_var(int var)
        {
            z = var;
        }
    private :
        int z;

};

int main()
{
    A *a;
    B b;
    b.y=10;
    b.set_var(11);
    a = &b;
    a->func();
    return 0;
}

