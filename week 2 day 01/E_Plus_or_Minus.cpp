#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       
        vector<int> v(3);
        for(int i=0;i<3;i++)
        {
            cin>>v[i];
        }
        
        if(v[0]+v[1]==v[2])
        {
            cout<<"+"<<endl;
        }
        else{
            cout<<"-"<<endl;
        }
    }

    return 0;
}
