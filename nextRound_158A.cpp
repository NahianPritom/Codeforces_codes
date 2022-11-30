#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,t2,k,t3=0;

    cin>>n>>k;
    if(k>=1 && k<=n >>n<=50)
    {
        for(int i=1; i<=n; i++){
            cin>>t;
            if(i>k && t==t2 && t>0)
                t3++;
            else if(i<=k && t>0 && t<=100)
                t3++;
            if(i==k)
                t2 = t;
        }
        cout<<t3;
    }
    else
        cout<<t3;
}
