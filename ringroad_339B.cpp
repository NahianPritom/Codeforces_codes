#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a;
    cin>>n>>m;
    cin>>a;
    long long int p=a;
    long long int s=a-1;
    for(int i=1; i<m; i++)
    {

        cin>>a;
        if(a>p)
            s+=a-p;
        else if(a<p)
            s+=(n-p)+a;
        p=a;

    }
    cout<<s<<endl;
}
