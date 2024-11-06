#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s, t;
    while (cin >> s >> t) {
        if (s == t) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 9858
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
