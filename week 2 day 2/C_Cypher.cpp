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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<string> s(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cin.ignore();
            cin >> s[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            string c;
            c = s[i];
            int sz=c.length();
            int a = 0, b = 0;
            for (int i = 0; i < sz; i++)
            {
                if (c[i] == 'D')
                {
                    a++;
                }
                else
                {
                    b++;
                }
            }
            if((v[i]+a-b)<0&&((v[i]+a-b)%10)!=0)
            {
                cout<<(((v[i]+a-b)%10)+10)<<" ";
            }
            else
            cout <<((v[i]+a-b)%10)<<" ";
        }
        cout<<endl;
        
    }

    return 0;
}
