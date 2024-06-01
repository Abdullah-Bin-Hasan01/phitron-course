#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    // cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        multiset<int> h;
        for (int i = 0; i < n; i++)
        {
            int price;
            cin >> price;
            h.insert(price);
        }

        for (int i = 0; i < m; i++)
        {
            int nprice;
            cin >> nprice;

            auto it = h.upper_bound(nprice);
            if (it == h.begin())
            {
             
                cout << -1 << '\n';
                
            }
            else
            {
                cout << *(--it) << '\n';
                h.erase(it);
            }
        }
    }
}
