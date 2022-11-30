#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        long long int z=0;
        long long int ans=0,temp=0;
        int t;
        cin>>t;
        string s;
        cin>>s;
        z = count(s.begin(),s.end(),'0');
        ans = z*(t-z);
        for(long long int j=0; j<t;)
        {
            long long int k=j;
            while(j<t && s[k]==s[j])
            {
                j++;
            }
            temp = (j-k)*(j-k);
            ans = max(ans,temp);

        }
        cout<<ans<<"\n";

    }

}
