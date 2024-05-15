#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mod 1000000007
void The_solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if ((n / i) != i)
                v.push_back(n / i);
        }
    }
    sort(v.begin(), v.end());
    if (v.size() >= k)
    {
        cout << v[k - 1] << nl;
    }
    else if (v.size() < k)
        cout << "-1" << nl;
}
int main()
{
    fast;
    ll test_case = 1;
    // cin >> test_case;
    while (test_case--)
        The_solve();
    return 0;
}