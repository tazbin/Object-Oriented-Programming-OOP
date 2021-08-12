#include <bits/stdc++.h>
using namespace std;

class ClassA
{

public:
    int a;

};

class ClassB: public ClassA
{

public:
    int b;

};

class ClassC: public ClassA
{

public:
    int c;

};

class ClassD: public ClassB, public ClassC
{ // here ClassD has two copies of ClassA

public:
    int d;

};

int main()
{
    ClassD obj;

    // obj.a = 10; // error

    obj.ClassB::a = 10; // specified a of ClassB
    obj.ClassC::a = 20; // specified a of ClassC

    cout << "A in class B: " << obj.ClassB::a << endl;
    cout << "A in class C: " << obj.ClassC::a << endl;

    return 0;
}
