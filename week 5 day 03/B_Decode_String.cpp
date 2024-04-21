#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;)
        {
        //     if(i<n-3 && s[i+3]=='0')
        //     {
        //         cout<<char(s[i]+'a'-1);
        //         int x=(s[i+1]-'0')*10+(s[i+2]-'0');
        //         cout<<char(x+'a'-1);
        //         x=0;
        //         i=i+4;
        //     }
        //    else 
        if(i<n-2 && s[i+2]=='0'&&(i+3>=n||s[i+3]!='0'))
            {
                int x=(s[i]-'0')*10+(s[i+1]-'0');
                cout<<char(x+96);
                x=0;
                i+=3;

            }
            else
            {
                cout<<char((s[i]-'0')+96);
                i++;
            }

        }
        cout<<endl;
    }

    return 0;
}