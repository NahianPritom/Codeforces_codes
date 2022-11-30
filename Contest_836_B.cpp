#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        if(n%2!=0)
        {
            cout<<1;
            for(int j=1; j<n; j++)
            {
                cout<<" "<<1;
            }
            cout<<"\n";
        }
        else if(n==2)
        {
            cout<<1<<" "<<3<<"\n";

        }
        else
        {
            cout<<1<<" "<<3;
            for(int j=2; j<n; j++)
            {
                cout<<" "<<2;
            }
            cout<<"\n";
        }
    }
}
