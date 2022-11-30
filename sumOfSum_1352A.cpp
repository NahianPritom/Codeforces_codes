#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=1;
    cin>>n;
    vector<string> v;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        v.emplace_back(s);

    }
    for(auto it:v){
        string s2;
        for(int j=1; j<it.size(); j++)
        {
            if((int(it[j])-48) !=0)
                c++;
        }
        cout<<c<<endl;
        c=1;
        s2.clear();
        s2.append(1,it[0]);
        s2.append(it.size()-1,'0');
        cout<<s2;
        for(int j=1; j<it.size(); j++)
        {
            if((int(it[j])-48) !=0)
            {
                s2.clear();
                s2.append(1,it[j]);
                s2.append(it.size()-j-1,'0');
                cout<<" "<<s2;
            }
        }
        cout<<endl;
    }

}
