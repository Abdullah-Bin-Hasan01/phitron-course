#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
		int t;
		cin>>t;
		up:
		while(t--){
			ll n;
			cin>>n;
			ll a[n+5],i,x=1,c=0;
		  for(i=1;i<=n;i++){
				cin>>a[i];
			}
			sort(a+1,a+1+n);
			map<ll,ll>mp;
			for(i=1;i<=n;i++){
				if(a[i]<=n&&mp[a[i]]==0){
					mp[a[i]]=1;
					continue;
				}
				while(mp[x]!=0){
					x++;
				}
				if(a[i]>2*x){
					c++;
					x++;
				}
				else {
					cout<<-1<<'\n';
					goto up;
				}
			}
			cout<<c<<'\n';
		}
}