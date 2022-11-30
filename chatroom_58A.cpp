#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='h' && c==0)
            c=1;
        else if(s[i]=='e' && c==1)
            c=2;
        else if(s[i]=='l' && (c==2 || c==3))
        {
            if(c==2)
                c=3;
            else if(c==3)
                c=4;
        }
        else if(s[i]=='o' && c==4)
        {
            c=5;
            break;
        }

    }
    if(c==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
