#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int x = s.length();
    if (x == 4)
    {
        cout << s << endl;
    }
    else if (x == 3)
    {
        cout << "0" << s << endl;
    }
    else if (x == 2)
    {
        cout << "0" <<"0"<< s << endl;
    }
    else if (x == 1)
    {
        cout << "0" <<"0"<<"0"<< s << endl;
    }
}