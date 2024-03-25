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
        int mx = INT_MIN;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            m[x]++;
            mx = max(mx, m[x]);
        }
        if (mx == n)
        {
            cout << "0" << endl;
        }
        else
        {
            int cnt = 1;
            while (mx <= n)
            {
                if (mx * 2 >= n)
                {
                    cnt += (n - mx);
                    break;
                }
                cnt += mx;
                mx = mx * 2;
                cnt++;
            }
            cout << cnt << endl;
        }
    }

    return 0;
}
