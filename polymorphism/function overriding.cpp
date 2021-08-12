#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    virtual void info()
    {
        cout << "This is a person" << endl;
    }
};

class Student: public Person
{
public:
    void info()
    {
        cout << "This is a student" << endl;
    }
};

class Teacher: public Student
{
public:
    void info()
    {
        cout << "This is a teacher" << endl;
    }
};

int main()
{

    Person *P;
    Teacher T;
    P = &T;

    P->info();

    return 0;

}
