#include <bits/stdc++.h>
using namespace std;

class Employee
{
public:
    int id;

    ~Employee()
    {
        cout << "Destructor called for id: " << id << endl;
    }
};


int main()
{
    Employee e1;
    e1.id = 7;

    int i=10;
    while(i)
    {
        Employee e2;
        e2.id = i;
        i--;
    }

    return 0;
}
