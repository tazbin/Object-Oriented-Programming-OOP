#include <bits/stdc++.h>
using namespace std;

class Calculate
{
private:
    float area;

public:
    Calculate()
    {
        area = 0;
    }

    Calculate(int length, int width)
    {
        area = length * width;
    }

    void showArea()
    {
        cout << "The area is: " << area << endl;
    }
};

int main()
{
    Calculate c1;
    c1.showArea();

    Calculate c2(10, 20);
    c2.showArea();

    return 0;
}
