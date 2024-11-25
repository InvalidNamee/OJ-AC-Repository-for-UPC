#include <cstdio>
#include <iostream>

using namespace std;

pair<int, char> card[16];

int trans(char c) {
    if (c == 'C') return 0;
    else if (c == 'D') return 1;
    else if (c == 'H') return 2;
    else return 3;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        char k;
        int cnt[4] = {0};
        cin >> n >> k;
        // cout << n << endl << k << endl;
        for (int i = 0; i < n * 2; ++i) {
            int a;
            char b;
            cin >> a >> b;
            // cout << a << b << ' ';
            cnt[trans(b)]++;
        }
        // cout << endl;
        swap(cnt[0], cnt[trans(k)]);
        for (int i = 1; i < 4; ++i) {
            if (cnt[i] & 1) {
                cnt[0]--;
            }
        }
        if (cnt[0] < 0) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    return 0;
}