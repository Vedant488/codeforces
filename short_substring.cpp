#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        string res;
        cout << s[0];
        for (string::size_type i = 1; i < s.size(); i++)
        {
            if (s[i] == s[i + 1])
            {
                s[i + 1] = '0';
            }
            if (s[i] != '0')
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}