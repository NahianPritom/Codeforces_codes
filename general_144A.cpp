#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cs,cb,s=110,b=0;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        if(a<=s)
        {
            s=a;
            cs=i;
        }
        if(a>b)
        {
            b=a;
            cb=i;
        }
    }

    if(cs<cb)
        cout<<n-cs+cb-2<<endl;
    else
        cout<<n-cs+cb-1<<endl;

}
