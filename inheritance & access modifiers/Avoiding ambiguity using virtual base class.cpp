#include <bits/stdc++.h>
using namespace std;

class ClassA
{

public:
    int a;

};

class ClassB: virtual public ClassA
{

public:
    int b;

};

class ClassC: virtual public ClassA
{

public:
    int c;

};

class ClassD: public ClassB, public ClassC
{ // here ClassD has only one copy of ClassA

public:
    int d;

};

int main()
{
    ClassD obj;

    obj.a = 10; // no error

    cout << "A in class D: " << obj.a << endl;

    return 0;
}
