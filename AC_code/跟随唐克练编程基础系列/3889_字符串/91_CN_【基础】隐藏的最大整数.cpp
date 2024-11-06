#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    pair<int, int> res = {0, 0}, t = {0, 0};
    for (int i = 0; i < s.length(); ++i) {
        if (isdigit(s[i])) {
            if (!t.second) t.second = i;
            t.first = t.first * 10 + s[i] - 48;
        }
        else {
            res = max(res, t);
            t = {0, 0};
        }
    }
    res = max(res, t);
    cout << res.second + 1 << endl;
    return 0;
}
/**************************************************************
	Problem: 22661
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
