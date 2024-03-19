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
        char c;
        cin >> c;
        string s;
        cin >> s;
        s = s + s;
        int cnt = 0, x = -1;
        int mx = 0;

        for (int i = 0; i < 2 * n; i++)
        {
            if (s[i] == c)
            {
                cnt = 0;
                for (int j = i; j < 2 * n; j++)
                {
                    i = j;
                    if (s[j] != 'g')
                    {
                        cnt++;
                    }
                    else if (s[j] == 'g')
                    {
                        break;
                    }
                }
                x = max(cnt, x);
            }
        }
        cout << x << endl;
    }

    return 0;
}