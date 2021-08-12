#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    void sum()
    {
        cout << "The sum is null" << endl;
    }

    void sum(int a, int b)
    {
        cout << "The sum is " << a+b << endl;
    }

    void sum(int a, int b, int c)
    {
        cout << "The sum is " << a+b+c << endl;
    }
};

int main()
{
    Base A;
    A.sum();
    A.sum(10, 20);
    A.sum(10, 20, 30);

    return 0;

}
