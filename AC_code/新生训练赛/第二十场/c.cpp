#include <iostream>
#include <bitset>

using namespace std;

long long s[20];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string t;
        cin >> t;
        for (auto j : t) {
            s[i] ^= 1ll << (j - 'A');
        }
    }
    int mx = 0;
    for (int i = 0; i < (1 << n); ++i) {
        long long t = 0;
        int cnt = 0;
        for (int j = 0; j < n; ++j) {
            if (i >> j & 1) t ^= s[j], cnt++;
        }
        if (!t) mx = max(mx, cnt);
    }
    cout << mx << endl;
    return 0;
}