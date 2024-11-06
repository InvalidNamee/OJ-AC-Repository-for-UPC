#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s, t;
    cin >> s;
    t = s;
    reverse(t.begin(), t.end());
    cout << (s == t ? "YES" : "NO") << endl;
    return 0;
}
/**************************************************************
	Problem: 9871
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
