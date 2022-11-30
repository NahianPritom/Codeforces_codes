#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;


    for(int i=0; i<t; i++)
    {
        string s;
        cin>>s;
        string r=s;
        sort(s.begin(),s.end());
        sort(r.begin(),r.end());
        reverse(r.begin(),r.end());
        string rs=s+r;
        cout<<rs<<"\n";

    }



}
