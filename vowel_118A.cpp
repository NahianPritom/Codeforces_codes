#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    char t = toupper(s[0]);
    string s1;
    s1.append(1,t);
    s.erase(0,1);
    s.insert(0,s1);
    cout<<s;


}

/*for(int i=0; i<s.size(); i++)
    {
        char s2 =tolower(s[i]);
        if(s2!='a'&&s2!='e'&&s2!='i'&&s2!='o'&&s2!='u'&&s2!='y')
            cout<<"."<<s2;

    }*/
