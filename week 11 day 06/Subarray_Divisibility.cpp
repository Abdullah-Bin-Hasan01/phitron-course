#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxN = 2e5;

int N, pre = 0, a;
vector <int> freq(maxN);
ll cnt = 0;

int mod(int x) {
    return (x % N + N) % N;
}

int main() {
    cin >> N;
    freq[0] = 1;
    
    for(int i = 0; i < N; i++) {
        cin >> a;
        pre = mod(pre + a);
        cnt += freq[pre];
        freq[pre]++;
    }
    
    cout << cnt << "\n";
    return 0;
}
