#include <iostream>

using namespace std;

typedef long long ll;

const int MOD = 20210423;

ll calc(const string &a) {
    ll ans = 0;
    for (auto i : a) {
        ans = ans << 1 | (i == '1');
        ans %= MOD;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    ll s = 0;
    cin >> n;
    while (n--) {
        string t;
        cin >> t;
        s += calc(t);
        s %= MOD;
    }
    cout << s << endl;
    return 0;
}
/**************************************************************
	Problem: 19239
	Language: C++
	Result: 正确
	Time:30 ms
	Memory:2384 kb
****************************************************************/
