#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    while (getline(cin, s)) {
        int t = 0, mx = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (isdigit(s[i])) t = t * 10 + s[i] - 48;
            else mx = max(mx, t), t = 0;
        }
        cout << max(mx, t) << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1016
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
