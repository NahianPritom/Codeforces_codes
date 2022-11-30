#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
   cin>>n>>k;
   for(int i=0; i<k; i++)
   {
       if(n%10==0)
           n=n/10;
       else
           n--;
   }
   cout<<n<<endl;

}



   //ANTON DANIK 734A
   /*int n,a=0,d=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='D')
            d++;
        else if(s[i]=='A')
            a++;
    }
    if(a>d)
        cout<<"Anton"<<endl;
    else if(d>a)
        cout<<"Danik"<<endl;
    else if(a==d)
        cout<<"Friendship"<<endl;*/
