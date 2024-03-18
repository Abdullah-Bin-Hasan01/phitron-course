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
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int x= i+1;
            if(v[i]>x)
            {
                cnt=max(cnt,cnt+(v[i]-x-cnt));
            
            }
        }
         cout<<cnt<<endl;
    }
}
