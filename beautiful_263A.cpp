#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c1,c2,c3,c4,c5,r;
    for(int i=1; i<=5; i++)
    {
        cin>>c1>>c2>>c3>>c4>>c5;
        if(c1==1||c2==1||c3==1||c4==1||c5==1)
        {
            if(c1==1)
            {
                r = abs(3-i) + abs(3-1);
            }
            else if(c2==1)
            {
                r = abs(3-i) + abs(3-2);
            }
            else if(c3==1)
            {
                r = abs(3-i);
            }
            else if(c4==1)
            {
                r = abs(3-i) + abs(3-4);
            }
            else if(c5==1)
            {
                r = abs(3-i) + abs(3-5);
            }
        }

    }
    cout<<r<<endl;

}

/*0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0*/
