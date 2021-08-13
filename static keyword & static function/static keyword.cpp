#include <bits/stdc++.h>
using namespace std;

class Base
{
private:
    int x;
    int y;
    int z;

public:
    static int numObjs;

    Base(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;

        numObjs++;
    }
};

int Base::numObjs = 0;

int main()
{
    Base b1(10, 20, 30);
    Base b2(100, 200, 300);

    cout << Base::numObjs << endl;
    return 0;
}
