#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];

    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        ar[i]=a;
    }
    sort(ar,ar+n);
    cout<<ar[0];

    for(int i=1; i<n; i++)
    {
        cout<<" "<<ar[i];
    }
}


/*
int n;
    set<int> s;
    for(int i=0; i<4; i++)
    {
        cin>>n;
        s.insert(n);
    }
    cout<<4 - s.size()<<endl;
    */
