#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s, t;
    cin >> s >> t;
    s += t;
    sort(s.begin(), s.end());
    cout << s << endl;
    return 0;
}
/**************************************************************
	Problem: 11100
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:2384 kb
****************************************************************/
