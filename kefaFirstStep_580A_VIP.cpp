#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,temp=0,s=10000000001;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        if(c>=temp)
            temp=c;
        if(s>a)
            c=0;
        c++;
        s=a;

    }
    if(temp>c)
        cout<<temp<<endl;
    else
        cout<<c<<endl;

}

/*
13
2 1 3 9 8 5 7 9 10 13 1 3 4
*/
