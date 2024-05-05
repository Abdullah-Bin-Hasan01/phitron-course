#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0,cnt1=0;
        for(int i=0;i<n;)
        {
            if(s[i]=='0')
            {
                cnt++;
                i++;
            }
            else
            {
                cnt1++;
                i++;
            }
        }
        int ans=min(cnt,cnt1);
        if(ans%2==0)
        {
            cout<<"Ramos"<<endl;
        }
        else
        {
            cout<<"Zlatan"<<endl;
        }
        // cout<<cnt<<endl;
    }
}