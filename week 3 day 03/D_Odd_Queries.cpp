#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        int sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
            v[i] = sum;
        }

        while (x--) {
            int a, b, c;
            cin >> a >> b >> c;

            if ((v[n - 1] - (v[b - 1] - (a > 1 ? v[a - 2] : 0)) + ((b - a + 1) * c)) % 2 == 0) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}
