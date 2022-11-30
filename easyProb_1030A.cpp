#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        if(a!=0)
        {
            s++;
            break;
        }

    }
    if(s != 0)
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;

}
