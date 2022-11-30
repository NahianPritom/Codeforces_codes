#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x1=0,y1=0,z1=0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        x1=x1+x;
        y1=y1+y;
        z1=z1+z;

    }
    if(x1==0 && y1==0 && z1==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}



//elephant 617A
/*double n;
    cin>>n;

    cout<<(long long)ceil(n/5)<<endl;*/
