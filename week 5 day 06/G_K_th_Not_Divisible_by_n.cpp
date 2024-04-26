#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, m = 0;
        cin >> n >> m;
        cout << (m * n - 1) / (n - 1) << endl;
    }
}
