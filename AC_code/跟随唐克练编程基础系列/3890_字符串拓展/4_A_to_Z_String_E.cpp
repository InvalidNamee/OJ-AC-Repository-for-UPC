#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    int l = 0x3f3f3f3f, r = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'A') l = min(l, i);
        if (s[i] == 'Z') r = max(r, i);
    }
    cout << r - l + 1 << endl;
    return 0;
}

/**************************************************************
	Problem: 6508
	Language: C++
	Result: 正确
	Time:3 ms
	Memory:2792 kb
****************************************************************/
