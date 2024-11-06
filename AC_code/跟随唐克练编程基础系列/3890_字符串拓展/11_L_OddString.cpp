#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        if (i & 1) continue;
        cout << s[i];
    }
    cout << endl;
    return 0;
}

/**************************************************************
	Problem: 6600
	Language: C++
	Result: 正确
	Time:13 ms
	Memory:2536 kb
****************************************************************/
