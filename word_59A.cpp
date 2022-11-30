#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int t=0,b=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>=65 && s[i]<=90)
            b++;
        else if(s[i]>=97 && s[i]<=122)
            t++;
    }
    if(b>t)
    {
        transform(s.begin(),s.end(),s.begin(), ::toupper);
        cout<<s<<endl;
    }
    else
    {
        transform(s.begin(),s.end(),s.begin(), ::tolower);
        cout<<s<<endl;
    }

}
