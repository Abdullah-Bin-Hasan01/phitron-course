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
    long long int z=0;
    
    while (r < m&& l<n)
    {
        long long int cnt=0;
    long long int cnt1=0;
    int crnt=x[l];
        while(x[l]==crnt&&l<n)
        {
            cnt++;
            l++;
        }
         while(crnt>y[r]&&r<m)
        {
            
            r++;
        }
         while(y[r]==crnt&&r<m)
        {
            cnt1++;
            r++;
        }
        z=z+(cnt*cnt1);
        
    }
    cout<<z<<endl;
   
}