#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    unordered_set<int> u;
    for(int i=n+1; i<=9012; i++)
    {
        u.insert((i/1000)%10);
        u.insert((i/100)%10);
        u.insert((i/10)%10);
        u.insert(i%10);
        if(u.size()==4)
        {
            cout<<i<<endl;
            break;
        }
        u.clear();
    }

}


//beautiful number
/*int n;
    cin>>n;
    if(n%4==0 || n%7==0 || n%44==0 || n%77==0 || n%47==0 || n%74==0 || n%474==0 || n%774==0 || n%444==0 || n%477==0 || n%447==0 || n%747==0 || n%777==0 || n%744==0)
        cout<<"YES";
    else
        cout<<"NO";*/
