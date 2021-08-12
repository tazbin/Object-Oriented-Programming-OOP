#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    int x;
    int y;

    Base operator + (Base B)
    {
        Base Test;
        Test.x = x + B.x;
        Test.y = y + B.y;

        return Test;
    }

    bool operator == (Base B)
    {
        if( x == B.x && y == B.y )
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Base A, B;
    A.x = 10;
    A.y = 10;

    B.x = 20;
    B.y = 20;

    Base C = A + B;

    cout << C.x << " " << C.y << endl;

    if( A == B )
    {
        cout << "A & B are equal" << endl;
    } else
    {
        cout << "A & B are not equal" << endl;
    }

    return 0;

}
