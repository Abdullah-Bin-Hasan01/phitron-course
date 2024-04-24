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
        vector<int> v(n);
        int x=0,neg=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]<0)
            {
                v[i]= -v[i];
                neg++;
            }
            x+=v[i];
        }
       sort(v.begin(), v.end());    
        if(neg%2==1)
        {
            x-=2*v[0];
        }
        cout<<x<<endl;
    }
}
