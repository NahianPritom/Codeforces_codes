#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;

    for(int a=0; a<t; a++)
    {
        string s;
        cin>>s;

        if(s[0]!='Y' && s[0]!='e' && s[0]!='s')
        {
            cout<<"NO"<<endl;
            continue;
        }
        else if((s[0]=='Y' || s[0]=='e' || s[0]=='s' ) && s.size()==1){
            cout<<"YES"<<endl;
            continue;
        }

        else
        {
            for(int i=1; i<s.size(); i++)
            {
                if(s[i]=='Y' && s[i-1]=='s')
                {
                    if((i+1)!=s.size())
                        continue;
                    else
                    {
                        cout<<"YES"<<endl;
                        break;
                    }

                }

                else if(s[i]=='e' && s[i-1]=='Y')
                {
                    if((i+1)!=s.size())
                        continue;
                    else
                    {
                        cout<<"YES"<<endl;
                        break;
                    }

                }

                else if(s[i]=='s' && s[i-1]=='e')
                {
                    if((i+1)!=s.size())
                        continue;
                    else
                    {
                        cout<<"YES"<<endl;
                        break;
                    }

                }

                else
                {
                    cout<<"NO"<<endl;
                    break;
                }
            }



        }



    }
}


/*int t,n;
   cin>>t;
   int v[t];

   for(int a=0; a<t; a++)
   {
       cin>>v[a];
   }

   for(int a=0; a<t; a++)
   {
       n=v[a];

       long long int i=2;
       long long int j=3*n;
       int q=(n+1)/2;

       cout<<q<<"\n";
       while(q--)
       {
           cout<<i<<" "<<j<<"\n";
           i+=3;
           j-=3;
           if(i>=j)
               break;
       }

   }*/




/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int v[n];

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    for(int a=0; a<n; a++)
    {
        cout<<v[a]/2<<endl;
        int i=2,j=3*n;
        while(i<j)
        {
            cout<<i<<" "<<j<<"\n";
            i+=3;
            j-=3;
        }
    }

}*/
