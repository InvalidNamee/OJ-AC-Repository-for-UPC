#include <iostream>

using namespace std;

typedef long long ll;

int c[10010], y[10010];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, s;
    ll res = 0;
    cin >> n >> s;
    for (int i = 0 ; i < n; ++i) {
        cin >> c[i] >> y[i];
        int mn = 0x3f3f3f3f;
        for (int j = 0; j < i; ++j) {
            c[j] += s;
            mn = min(mn, c[j]);
        }
        mn = min(mn, c[i]);
        // cout << mn << ' ' << y[i] << endl;
        res += mn * y[i];        
    }
    cout << res << endl;
    return 0;
}
/**************************************************************
	Problem: 22641
	Language: C++
	Result: 正确
	Time:65 ms
	Memory:2460 kb
****************************************************************/
