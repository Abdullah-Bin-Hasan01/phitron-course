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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int x = INT_MIN;
        int f=1;
        for (int i = 0; i < n; i++)
        {
            // x = (a[i] - b[i]);
            // if(x==0||x==-1)
            // {
            //     f=1;
            // }
            // else
            // f=0;
            if(a[i]!=b[i]&&b[i]!=a[i]+1)
            {
                f=0;
            }
        }
        if(f==1)
        cout <<"YES" << endl;
        else cout<<"NO"<<endl;
    }
}