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
    long long cnt=0;
    while (r < m)
    {
        while(y[r]>x[l]&&l<n)
        {
            cnt++;
            l++;
        }
        r++;
        cout<<cnt<<" ";
    }
    cout<<endl;
   
}