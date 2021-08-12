#include <bits/stdc++.h>
using namespace std;

// a class becomes an abstract class when it contains a pure virtual destructor

class Base // abstract class
{
public:
    virtual ~Base() = 0; // pure virtual destructor
};

Base::~Base()
{
    cout << "Base destructor called" << endl;
}

class Derived: public Base
{
public:
    ~Derived()
    {
        cout << "Derived destructor called" << endl;
    };
};

int main()
{
    Base* b = new Derived;
    delete b; // both destructors called

    return 0;
}
