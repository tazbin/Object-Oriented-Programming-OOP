#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "I am in base class" << endl;
    }
};

class Derived: public Base
{
public:
    void show()
    {
        cout << "I am in derived class" << endl;
    }
};

int main()
{

    Base* b;
    Derived d;

    b = &d;
    b->show();

    return 0;
}
