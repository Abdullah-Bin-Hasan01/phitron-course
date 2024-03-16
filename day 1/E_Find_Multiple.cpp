#include <bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,c;
   int f=0;
   cin>>a>>b>>c;
   for (int i=a;i<=b;i++)
   {
    if(i%c==0)
    {
        cout<<i<<endl;
        f=1;
        break;
    }
    // else{
    //     cout<<"-1"<<endl;
    // }
   }
   if(f==0)
   {
    cout<<"-1"<<endl;
   }
}