#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int flag = 0;
    int x = s.length();
    sort(s.begin(), s.end());
    int a[100001] = {0};
    for (int i = 0; i < x; i++)
    {
        int z = s[i] - 97;
        a[z] = s[i] - 97;
    }
    for (int i = 0, j = 1; i < 26; i++)
    {
        // cout<<a[i]<<" ";
        if (s[0] == 'a' && j<26&& a[j] == 0)
        {
            flag = 1;
            char z = j + 97;
            cout << z << endl;
            // cout<<j;
            break;
        }
        else if (s[0] != 'a')
        {
            flag = 1;
            cout << 'a' << endl;
            break;
        }
        j++;
    }
    // int b=0;
    if (!flag)
        cout << "None" << endl;
    //   cout<<endl<<x;
}