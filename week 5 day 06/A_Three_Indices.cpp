#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
          int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x, y, z, found = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i - 1] < a[i])
        {
            if (a[i] > a[i + 1])
            {
                x = i;
                y = i + 1;
                z = i + 2;
                found = 1;
                break;
            }
        }
    }

    if (found == 1)
    {
        cout << "YES\n";
        cout << x << " " << y << " " << z << "\n";
    }
    else
        cout << "NO\n";
}

    }

