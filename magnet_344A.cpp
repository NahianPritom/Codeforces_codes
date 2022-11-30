#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n,c=1;
    cin>>n;
    string s;
    cin>>s;
    int p = stoi(s);
    for(int i=1; i<n; i++)
    {
        string s2;
        cin>>s2;
        if(p!=stoi(s2))
        {
            c++;
            p=stoi(s2);
        }
    }
    cout<<c<<endl;

}
