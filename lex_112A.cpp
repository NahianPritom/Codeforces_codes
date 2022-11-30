#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int t=0;
    for(int i=0; i<s1.size(); i++)
    {
        int a = toupper(s1[i]);
        int b = toupper(s2[i]);

        if(a>b)
        {
            t=1;
            break;
        }
        else if(a<b)
        {
            t=-1;
            break;
        }
    }
    cout<<t<<endl;

}

//bwuEhEveouaTECagLZiqmUdxEmhRSOzMauJRWLQMppZOumxhAmwuGeDIkvkBLvMXwUoFmpAfDprBcFtEwOULcZWRQhcTbTbX
//HhoDWbcxwiMnCNexOsKsujLiSGcLllXOkRSbnOzThAjnnliLYFFmsYkOfpTxRNEfBsoUHfoLTiqAINRPxWRqrTJhgfkKcDOH
