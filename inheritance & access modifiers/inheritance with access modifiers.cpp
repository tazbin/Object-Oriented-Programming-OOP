#include <bits/stdc++.h>
using namespace std;

class A
{

private:
    int x;

protected:
    int y;

public:
    int z;

};

class B: public A
{
    // x is not accessible here
    // y is accessible & protected here
    // z is accessible & public here
};

class C: protected A
{
    // x is not accessible here
    // y is accessible & protected here
    // z is accessible & protected here
};

class D: private A
{
    // x is not accessible here
    // y is accessible & private here
    // z is accessible & private here
};

int main()
{
    B b;
    b.x = 10; // error
    b.y = 10; // error
    b.z = 10; // no error

    C c;
    c.x = 10; // error
    c.y = 10; // error
    c.z = 10; // error

    D d;
    d.x = 10; // error
    d.y = 10; // error
    d.z = 10; // error

    return 0;
}
