#include <bits/stdc++.h>
using namespace std;

class A
{
private:
    string name;
    int age;

public:
    setName(string s)
    {
        name = s;
    }

    setAge(int a)
    {
        age = a;
    }

    // defining friend class
    friend class B;

    // defining friend function
    friend void isAdult(A);
};

class B
{
public:
    showData(A a)
    {
        cout << "My name is: " << a.name << endl;
        cout << "My age is: " << a.age << endl;
    }
};

void isAdult(A a)
{
    if( a.age >= 18 )
    {
        cout << a.name << " is an adult" << endl;
    } else
    {
        cout << a.name << " is a child" << endl;
    }
}

int main()
{
    A ami;
    ami.setName("Tazbinur bhai");
    ami.setAge(15);

    B beta;
    beta.showData(ami);

    isAdult(ami);

    return 0;
}
