#include <bits/stdc++.h>
using namespace std;

class Sales
{
private:
    int sales_of_march;

public:
    void set_sales_of_march(int amount)
    {
        sales_of_march = amount;
    }

    int get_sales_of_march()
    {
        return sales_of_march;
    }
};

int main()
{
    Sales obj;

    obj.set_sales_of_march(100);
    int amount = obj.get_sales_of_march();

    cout << "Sales of March is: " << amount << endl;

    return 0;
}
