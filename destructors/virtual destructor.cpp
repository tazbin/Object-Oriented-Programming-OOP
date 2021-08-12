#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    virtual ~Base()
    {
        cout << "Base destructor called" << endl;
    }
};

class Derived: public Base
{
public:
    ~Derived()
    {
        cout << "Derived destructor called" << endl;
    }
};

int main()
{
    Base* b = new Derived;
    delete b;
    /*
    without the virtual the 'delete b' will only call Base class destructor
    & this will not delete the whole object
    */

    return 0;
}
