#include <iostream>

using namespace std;

int a[26];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    while (n--) {
        char c;
        int t;
        cin >> c >> t;
        a[c - 'A'] = t;
    }
    string s;
    int ans = 0;
    cin >> s;
    for (auto i : s) {
        if (isupper(i)) ans += a[i - 'A'];
    }
    cout << ans << endl;
    return 0;
}
/**************************************************************
	Problem: 10368
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
