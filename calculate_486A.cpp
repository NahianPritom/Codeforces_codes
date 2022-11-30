#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int r = n/2;
    if(n%2==0)
        cout<<r<<endl;
    else
        cout<<(-1)*(r+1)<<endl;

}
