#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string ab;
        cin >> ab;
        int n = ab.length();
        bool found = false;

        for (int i = 1; i < n; i++)
        {
            string a = ab.substr(0, i);
            string b = ab.substr(i);

            int x = stoi(a);
            int y = stoi(b);

            if (a[0] != '0' && b[0] != '0' && y > x)
            {
                cout << x << " " << y << endl;
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
