#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x = 0;
        cin >> n;
        map<string, int> m;
        string s[3][n];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> s[i][j];
                m[s[i][j]]++;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            x = 0;
            for (int j = 0; j < n; j++)
            {
                if (m[s[i][j]] == 1)
                {
                    x = x + 3;
                }
                else if (m[s[i][j]] == 2)
                {
                    x++;
                }
            }
            cout << x << " ";
        }
        cout << endl;
    }
    
    return 0;
}
