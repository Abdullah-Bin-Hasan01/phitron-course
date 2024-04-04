#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++)
       {
        cin>>a[i];
       }
       set<int> s;
       int x=0;
       for(int i=n-1,j=1;i>=0;i--,j++)
       {
        s.insert(a[i]);
        if(s.size()<j)
        {
            cout<<n-j+1;
            x=1;
            break;
        }
       }
       if(!x) cout<<"0";
       cout<<endl;      
    }
}
