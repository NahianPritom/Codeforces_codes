#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,p1,p2,p3,c=0;
    cin>>n;
    if(n>=1 && n<=1000)
    {
        for(int i=0; i<n; i++)
        {
            cin>>p1>>p2>>p3;
            int temp = p1+p2+p3;
            if(temp>1 && temp<4)
            {
                c++;
            }
        }
        cout<<c<<endl;
    }

}
