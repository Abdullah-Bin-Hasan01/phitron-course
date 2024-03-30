#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        string s,t="";
        cin>>n>>s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        
        if(s[0]=='m') t+= 'm';
        else t+= s[0];
        for(i=1;i<n;i++) if(s[i]!=s[i-1]) t+= s[i];

        
        if((t== "meow")) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }
    return 0;
}