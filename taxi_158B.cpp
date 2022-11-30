#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=0,c2=0,c4=0,c5=0,c6=0;
    int t1=0,t2=0,t3=0;

    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        if(a==4)
            c++;
        else if(a==3)
            t3++;
        else if(a==2)
            t2++;
        else if(a==1)
            t1++;
    }

    c2=t3;
    if(t3<t1)
        c4=t1-t3;

    c5=t2/2;
    if(t2%2!=0)
        c6=1;
    if(c6==1 && c4<=2)
        c4=0;
    else if(c6==1)
        c4=c4-2;
    if(c4%4==0)
            c4=c4/4;
    else{
        c4=(c4/4)+1;
    }

    cout<<c+c2+c4+c5+c6<<endl;

}
