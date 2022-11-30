#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        sum+=a;
    }
    double sum1 = double(sum);

    cout<<fixed<<setprecision(12)<<sum1/n<<endl;

}
