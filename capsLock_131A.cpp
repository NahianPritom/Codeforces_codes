#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0;
    for(int i=1; i<s.size(); i++)
    {
        if(s[i]>64 && s[i]<91)
        {
            c++;
        }
    }
    if(c==s.size()-1 && (s[0]>96 && s[0]<123) || ((s[0]>96 && s[0]<123) && s.size()==1))
    {
        char a= toupper(s[0]);
        transform(s.begin(),s.end(),s.begin(),::tolower);
        s.erase(0,1);

        cout<<a<<s;
    }
    else if(c==s.size()-1 && (s[0]>64 && s[0]<91))
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s;

    }
    else
        cout<<s;

}
