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
        set<int> x;
        for(int i=0;i<n;i++)
        {
            int a;cin>>a;
            x.insert(a);
        }
        int s=x.size();
        if((n-s)%2==1)
        {
            cout<<(s-1)<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }

    return 0;
}
