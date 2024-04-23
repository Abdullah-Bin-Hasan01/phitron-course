#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l=0,r=s.length()-1;
        int f=1,cnt=0;
        while(l<r)
        {
            if(s[l]!=s[r])
            {
               f=0;
               break; 
            }
             if(s[0]==s[l])
            {
                cnt++;
            }
                l++;
                r--;
           
            
        }
        //  cout<<s.length()<<endl;
            if(f==1&&cnt!=(s.length()/2))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        // cout<<cnt<<endl;
    }
}
