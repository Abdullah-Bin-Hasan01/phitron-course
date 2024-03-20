#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int x[n], y[m] ;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> y[i];
    }
    int l = 0, r = 0;
    while (l < n && r < m)
    {
        if (x[l] <= y[r])
        {
            cout << x[l] << " ";
            l++;
        }
        else
        {
            cout << y[r] << " ";
            r++;
        }
    }
    while (l < n)
    {
        cout << x[l] << " ";

        l++;
    }
    while (r < m)
    {
        
        cout << y[r] << " ";

        r++;
    }
}