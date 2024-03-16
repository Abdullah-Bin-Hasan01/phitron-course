#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y;
    cin>>x>>y;
    long long int z=0;
    while(1)
    {
        int a=1;
        if(x*a<=y)
        {
           z++; 
        }
        else if(x*a>=y)
        {
            break;
        }
        a++;
        x=x*a;
    }
    cout<<z;
}