#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while (test--)
    {
        int n;
        cin>>n;
        int arr[n];
        int o = 0;
        int e = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < n; i+=2)
        {
            if (arr[i]%2!=0)
            {
                o++;
            }
        }
        for (int i = 1; i < n; i+=2)
        {
            if(arr[i]%2==0)
            {
                e++;
            }
        }
        if(o==e)
        {
            cout<<o<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}