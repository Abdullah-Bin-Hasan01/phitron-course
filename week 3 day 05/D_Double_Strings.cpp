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
        vector<string> v(n);
        map<string,bool> m;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            m[v[i]]=true;
        }
        for(int i=0;i<n;i++)
        {
            bool flag = false;
            for(int j=0;j<v[i].size();j++)
            {
                string s1= v[i].substr(0,j);
                string s2= v[i].substr(j,v[i].size()-1);
                if(m[s1]&&m[s2])
                {
                    flag = true;
                    break;
                }
            }
            if(flag) cout<<"1";
            else cout<<"0";
        }
        cout<<endl;
    }

    return 0;
}
