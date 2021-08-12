#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
    string name;
    int age;

public:
    Employee()
    {
        name = "Tazbinur";
        age = 30;
    }

    void showData()
    {
        cout << "Employee name is " << name << endl;
        cout << "Employee age is " << age << endl;
    }
};

int main()
{
    Employee e1;
    e1.showData();

    return 0;
}
