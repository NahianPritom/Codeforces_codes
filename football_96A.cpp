#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=s[0],t=1;
    for(int i=1; i<s.size(); i++)
    {
        if(s[i]==c)
        {
            t++;
            if(t==7)
            {
                cout<<"YES"<<endl;
                break;
            }
        }
        else
            t=1;
        c=s[i];

    }
    if(t<7)
        cout<<"NO"<<endl;

}
