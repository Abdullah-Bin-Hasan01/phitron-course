#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<string> v(n);
        int ans=INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            string s = v[i];
            for (int j = i + 1; j < n; j++)
            {
                string s1 = v[j];
                int cnt=0;
                for (int k = 0; k < x; k++)
                {
                    cnt+=abs(s1[k]-s[k]);
                }
                ans=min(ans,cnt);
            }
            
        }
        cout<<ans<<endl;
    }
}
