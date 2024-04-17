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
        vector<int> v(n);
        int x=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            x^=v[i];
        }
        if(n%2==0)
        {
            if(x==0)
            {
                cout<<"0"<<endl;
            }
            else
            {
                cout<<"-1"<<endl;
            }
        }
        else
        {
            cout<<x<<endl;
        } 
    }
	return 0;
}