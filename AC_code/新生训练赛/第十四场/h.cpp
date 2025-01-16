#include <iostream>
#include <algorithm>

using namespace std;

string a[20];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        reverse(a[i].begin(), a[i].end());
    }
    int res = 0;
    for (int i = 0; i < (1 << n); ++i) {
        int t[n] = {};
        int cnt = 0;
        bool valid = true;
        for (int j = 0; j < n; ++j) {
            if (i >> j & 1) {
                cnt++;
                for (int k = 0; k < a[j].length(); ++k) {
                    t[k] += a[j][k] - '0';
                    if (t[k] >= 10) {
                        valid = false;
                        break;
                    }
                }
                if (!valid) break;
            }
        }
        if (valid) res = max(res, cnt);
    }
    cout << res << endl;
    return 0;
}