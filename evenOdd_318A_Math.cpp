#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;
    long long int h = ceil(n/2.00);
    if(k<=h)
        cout<<(k*2)-1<<endl;
    else
        cout<<(k-h)*2<<endl;

}



/*if(n%2==0)
       n1=n/2;
   else
       n1=(n/2)+1;

   long long int s1=-1,s2=0;
   if(k<=n1)
   {
       for(long long int i=1; i<=n1; i++)
       {
           s1+=2;
           if(i==k)
           {
               cout<<s1<<endl;
               break;
           }

       }
   }
   else
   {
       for(long long int i=(n1+1); i<=(n1+n2); i++)
       {
           s2+=2;
           if(i==k)
           {
               cout<<s2<<endl;
               break;
           }

       }
   }*/
