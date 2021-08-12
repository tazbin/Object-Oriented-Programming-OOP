#include <bits/stdc++.h>
using namespace std;

class Human
{

public:
    int id_h;

};

class Parent
{

public:
    int id_p;

};

class Child: public Human, public Parent
{

public:
    int id_c;

};

int main()
{
    Child c;

    c.id_h = 10;
    c.id_p = 20;
    c.id_c = 30;

    cout << "Human id is: " << c.id_h << endl;
    cout << "Parent id is: " << c.id_p << endl;
    cout << "Child id is: " << c.id_c << endl;

    return 0;
}
