#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int x, y, n;
        cin >> x >> y >> n;
        int temp = n % x;
        int res;
        if (temp == y)
        {
            cout << n << endl;
        }
        else if (temp > y)
        {
            cout << n - (temp - y) << endl;
        }
        else if (temp < y)
        {
            res = temp + (x - y);
            if ((res > 0) && (res <= n))
            {
                cout << (n - res) << endl;
            }
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}