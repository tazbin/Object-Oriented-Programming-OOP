#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
    string Position;
    int Age;

public:
    Employee( string position, int age )
    {
        Position = position;
        Age = age;
    }

    void showData()
    {
        cout << "Employee is a " << Position << endl;
        cout << "Employee is " << Age << " years old" << endl;
    }
};

int main()
{
    Employee ami("CTO", 30);
    ami.showData();

    return 0;
}
