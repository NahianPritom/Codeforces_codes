#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,sum2=0;
    cin>>n;
    multiset<int, greater<int>> s;

    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        s.insert(a);
        sum += a;
    }
    int t = sum/2;
    int c=0;
    for(auto i=s.begin(); i!=s.end(); i++)
    {

        sum2 += *i;
        c++;
        if(sum2>t)
        {
            cout<<c<<endl;
            break;
        }

    }

}
