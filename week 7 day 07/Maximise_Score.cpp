#include <bits/stdc++.h>
using namespace std;


int main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n),x(n-1);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n-1;i++)
        {
           x[i]=abs(v[i+1]-v[i]);
        }
        // sort(x.begin(),x.end());
        int oc=INT_MAX;
        if(n>=2)
        oc=min(oc,x[0]);
        if(n>=2)
        oc=min(oc,x[n-2]);
         for(int i=0;i<n-1;i++)
        {
          int mx=max(x[i-1],x[i]);
        oc=min(oc,mx);

        }
        cout<<oc<<endl;

    }
    return 0;
}