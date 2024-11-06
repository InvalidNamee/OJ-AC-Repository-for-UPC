#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    int n, ans = 0;
    cin >> n;
    while (n--) {
        cin >> s;
        if (s[0] > 'T' && s[0] <= 'Z' || s[0] > 'G' && s[0] < 'R') ans++;
    }
    cout << ans << endl;
    return 0;
}
/**************************************************************
	Problem: 3513
	Language: C++
	Result: 正确
	Time:9 ms
	Memory:2384 kb
****************************************************************/
