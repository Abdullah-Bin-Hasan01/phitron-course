#include <bits/stdc++.h>
using namespace std;
int main()
{ 
 int n,t;
 cin>>n>>t;
 if(n>t)
 {
    cout<<2*n-1<<endl;
 }
 else if(t>n){
    cout<<2*t-1<<endl;
 }
 else{
    cout<<n+t<<endl;
 }
}