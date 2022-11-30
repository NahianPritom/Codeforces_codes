#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string s;
    for(int i=1; i<=n; i++)
    {
        if(i%2 != 0)
        {
            s.append(m,'#');
        }
        else if(i%4 == 0)
        {
            s.append(1,'#');
            s.append(m-1,'.');
        }
        else if(i%2 == 0)
        {
            s.append(m-1,'.');
            s.append(1,'#');
        }
        cout<<s<<endl;
        s.clear();

    }

}
