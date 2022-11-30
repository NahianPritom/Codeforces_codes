#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    vector<int> v;
    for(int i=0; i<T; i++)
    {
        int n,a,b;
        cin>>a>>b>>n;
        int j=1;
        while(true)
        {
            if(a>b)
            {
                b+=a;
            }
            else
                a+=b;
            if(a>n || b>n)
            {
                v.emplace_back(j);
                break;
            }
            j++;
        }

    }
    for(auto it:v){
        cout<<it<<endl;
    }
}
