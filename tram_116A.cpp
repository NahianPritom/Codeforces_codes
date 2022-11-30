#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    cin>>a>>b;
    int s = b;
    int temp = b;
    for(int i=1; i<n-1; i++)
    {
        cin>>a>>b;
        s-=a;
        s+=b;
        if(s>temp)
            temp=s;
    }
    cin>>a>>b;
    cout<<temp<<endl;
}
