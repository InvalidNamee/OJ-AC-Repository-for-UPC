#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    int ans = 0;
    getline(cin, s);
    for (auto i : s) {
        if (isupper(i)) ans += i - 'A' + 1;
    }
    if (ans > 100) cout << "INVALID" << endl;
    else cout << ans << endl;
    return 0;
}
/**************************************************************
	Problem: 9884
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
