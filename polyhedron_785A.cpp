#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=0;

    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        if(s[0]=='T')
            c+=4;
        else if(s[0]=='C')
            c+=6;
        else if(s[0] == 'O')
            c+=8;
        else if(s[0] == 'D')
            c+=12;
        else if(s[0] == 'I')
            c+=20;
    }
    cout<<c<<endl;

}


/*if(s.compare("Tetrahedron") == 0)
            c+=4;
        else if(s.compare("Cube") == 0)
            c+=6;
        else if(s.compare("Octahedron") == 0)
            c+=8;
        else if(s.compare("Dodecahedron") == 0)
            c+=12;
        else if(s.compare("Icosahedron") == 0)
            c+=20;*/
