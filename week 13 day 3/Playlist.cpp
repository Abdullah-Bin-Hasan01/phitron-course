#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    // cin >> t;

    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int x=0;
        set<int> s;
        int i=0,j=0;
        while(i<n&&j<n)
        {
            while(j<n && !s.count(v[j]))
            {
                s.insert(v[j]);
                x= max(x,j-i+1);
                j++;
            }
            while(j<n && s.count(v[j]))
        
        {
            s.erase(v[i]);
            i++;
        }

        }
        cout<<x<<endl;
    }

    return 0;
}
