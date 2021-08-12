#include <bits/stdc++.h>
using namespace std;

class Calculate
{
private:
    int a;
    int b;
    int c;

public:
    int sum(int x, int y)
    {
        a = x;
        b = y;
        c = a + b;

        cout << "The sum is: " << c << endl;
    }
};

int main()
{
    Calculate obj;
    obj.sum(10, 20);

    return 0;
}
