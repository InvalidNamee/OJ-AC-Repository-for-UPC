#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    int t = 0, res = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'R') {
            t++;
            res = max(res, t);
        }
        else t = 0;
    }
    cout << res << endl;
    return 0;
}
/**************************************************************
	Problem: 17568
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
