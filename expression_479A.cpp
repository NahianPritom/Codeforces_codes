#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;

    if(a==1 && c==1)
        cout<<a+b+c<<endl;
    else if((b==1 && a<=c) || a==1)
        cout<<(b+a)*c<<endl;
    else if((b==1 && a>c) || c==1)
        cout<<(b+c)*a<<endl;
    else
        cout<<a*b*c<<endl;

}
