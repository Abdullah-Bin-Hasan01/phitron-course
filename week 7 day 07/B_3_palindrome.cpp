#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,j=0;
  cin >> n;
  string s[]={"a","a","b","b"};
  for(int i=0;i<n;i++)
  {
    cout<<s[j];
    j++;
    if(j==4)
    {
        j=0;
    }
  }
  return 0; 
}