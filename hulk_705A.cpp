#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>=1&&n<=100)
    {
        cout<<"I hate";
        for(int i=2; i<=n; i++)
        {
            if(i%2==0)
            {
                cout<<" that I love";
            }
            else
            {
                cout<<" that I hate";
            }
        }

        cout<<" it"<<endl;

    }

    return 0;
}
