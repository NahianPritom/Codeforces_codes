#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long int s=0;
    vector<long long int> v;

    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;

        for(int j=0; j<n; j++)
        {
            int a;
            cin>>a;
            s+=a;

        }
        v.emplace_back(abs(s));
        s=0;

    }
    for(auto i:v)
    {
        cout<<i<<endl;
    }

}
