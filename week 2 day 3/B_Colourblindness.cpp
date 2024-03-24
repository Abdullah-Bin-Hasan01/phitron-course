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
        string s,s1;
        cin>>s>>s1;
        int x=1;
        // sort(s.begin(),s.end());
        // sort(s1.begin(),s1.end());
        for(int i=0,j=0;i<n,j<n;i++,j++)
        {
            if(s[i]=='R'&&s1[j]!='R')
            {
                x=0;
            }
            else if(s1[i]=='R'&&s[j]!='R')
            {
                x=0;
            }
        }
        if(x)cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }

    return 0;
}
