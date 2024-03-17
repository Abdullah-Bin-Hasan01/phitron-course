
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll total = 0;

    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        total = total + v[i];
    }
    sort(v.begin(),v.end());
    for (ll i = 0; i < n; i++)
    {
        if (n == 1 && v[i] == 1)
        {
            cout << "0" << endl;
        }
        else
        {
            ll x = total - v[i];
            if (total % 2 == 0)
            {
                cout << total << endl;
                return 0;
            }
            else if (x % 2 == 0)
            {
                cout << x << endl;
                return 0;
            }
        }
    }
}
