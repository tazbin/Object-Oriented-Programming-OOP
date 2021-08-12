#include <bits/stdc++.h>
using namespace std;

class Point
{
private:
    int x;
    int y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    Point(const Point &p)
    {
        x = p.x;
        y = p.y;
    }

    void showData()
    {
        cout << "x: " << x << " y: " << y << endl;
    }
};

int main()
{
    Point p1(10, 20);
    p1.showData();

    Point p2 = p1; // copy constructor
    p2.showData();

    Point p3(30, 40);
    p3 = p2; // assignment operator
    p3.showData();
}
