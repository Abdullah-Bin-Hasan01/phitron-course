#include <bits/stdc++.h>
using namespace std;
int check1(vector<int>&v)
{
    int i=0,j=v.size()-1;
    int ans=1;
    while(i<j)
    {
        if(v[i]!=v[j])
        {
            ans=0;
            break;
        }
        i++;
        j--;
    }
    return ans;
}

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
    int n,k;
    string s;
    cin>>n>>k>>s;
    int count =0 ;
    map<char,int> mp;
    for(auto i:s)
    {
        mp[i]++;
    }
    for(auto i:mp)
    {
        if(i.second%2!=0) count++;
    }
    if(count<=(k+1))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
   }
}
