#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    int f = 0;
    cin >> a >> b >> c;
    for (int i = 0; i <= 10000; i++)
    {
        for (int j = 0; j <= 10000; j++)
        {
            if (f)
            {
                break;
            }
            if (a * i + b * j == c)
            {
                f = 1;
                cout << "Yes" << endl;
                break;
            }
            if (f)
            {
                break;
            }
            if (b * i + a * j == c)
            {
                f = 1;
                cout << "Yes" << endl;
                break;
            }
            if (f)
            {
                break;
            }
        }
    }
    if (!f)
    {
        cout << "No" << endl;
    }
}
