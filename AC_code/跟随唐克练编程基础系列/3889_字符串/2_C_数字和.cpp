#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    int ans = 0;
    for (auto i : s) ans += i - 48;
    cout << ans << endl;
    return 0;
}
/**************************************************************
	Problem: 20519
	Language: C++
	Result: 正确
	Time:13 ms
	Memory:2384 kb
****************************************************************/
