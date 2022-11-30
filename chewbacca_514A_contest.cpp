#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int e=int(s[0])-48;
    if(e>4 && e<9)
        cout<<9-e;
    else
        cout<<e;
    for(int i=1; i<s.size(); i++)
    {
        if(int(s[i])-48 >4)
            cout<<9-(int(s[i])-48);
        else
            cout<<s[i];
    }
}

/*int n;
    cin>>n;
    int v[n];

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    for(int i=0; i<n; i++)
    {
        if(v[i]==1)
        {
            cout<<1<<endl;
            cout<<1<<" "<<2<<endl;

        }
        else if(v[i]%2==0)
        {
            cout<<v[i]/2<<endl;
            int z=2,x=6;
            for(int j=0; j<(v[i]/2); j++)
            {
                cout<<z<<" "<<x<<endl;
                z=z+6;
                x=x+6;
            }

        }
        else
        {
            cout<<(v[i]/2)+1<<endl;
            int z=2,x=6;
            for(int j=0; j<(v[i]/2); j++)
            {
                cout<<z<<" "<<x<<endl;

                z=z+6;
                x=x+6;


            }
            cout<<x+2-6<<" "<<x+3-6<<endl;
        }
    }

