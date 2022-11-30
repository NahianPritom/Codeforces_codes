#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n = (s.size()/2)+1;
    char arr[n];
    for(int i=0; i<s.size(); i=i+2)
    {
        arr[i/2] = s[i];
    }
    sort(arr,arr+n);

    cout<<arr[0];
    if(s.size()>1)
    {
        for(int i=1; i<n; i++)
        {
            cout<<"+"<<arr[i];
        }

    }
}
