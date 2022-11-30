#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n;
    vector<string> vect;
    if(n>=1 && n<=100)
    {
        for(int i=0; i<n; i++)
        {
            cin>>s;
            vect.push_back(s);
        }
        for(auto i:vect)
        {
            if(i.size()>10)
            {
                int a=i.size();
                cout<<i[0]<<a-2<<i[a-1]<<endl;
            }
            else
                cout<<i<<endl;
        }
    }

}
/*using namespace std;
void output(vector<int> v)
{
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;
}
int main()
{
    vector<int> vect1;
    int element;
    for(int i=0; i<5; i++){
        cout<<"Enter element: ";
        cin>>element;

        vect1.push_back(element);
    }
    output(vect1);
    return 0;

}*/
