#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0;
    string s;
    cin>>n;
    if(n>=1 && n<=150)
    {
        for(int i=0; i<n; i++)
        {
            cin>>s;
            if((s=="X++" || s=="++X") && s.size()==3)
                x++;
            else if((s=="X--" || s=="--X") && s.size()==3)
                x--;
        }
    }
    cout<<x<<endl;

}
