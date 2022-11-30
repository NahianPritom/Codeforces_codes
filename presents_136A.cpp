#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int arr2[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        arr2[arr[i]-1] = i+1;
    }
    cout<<arr2[0];
    for(int i=1; i<n; i++)
    {
        cout<<" "<<arr2[i];
    }


}
