
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{

    ll n;
    cin >> n;
    vector<ll> v(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        
    }
    
    sort(v.begin(),v.end());
    // cout<<v[n-1];
    for (ll i = 0,j=0; i < n; i++,j++)
    {
        if(v[n-1]<n)
        {
            cout<<n<<endl;
            return 0;
        }
        if (v[i]!=j)
        {
            cout << j << endl;
            return 0;
        }
        
        
    }
}
