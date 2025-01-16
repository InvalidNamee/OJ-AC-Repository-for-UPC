#include <iostream>
#include <unordered_set>

using namespace std;

unordered_set<string> s;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        string str;
        cin >> str;
        s.insert(str);
    }
    cin >> m;
    for (int i = 1; i <= m; ++i) {
        string str;
        cin >> str;
        if (s.find(str) != s.end()) {
            cout << str << endl;
        }
    }
    return 0;
}
/**************************************************************
	Problem: 5349
	Language: C++
	Result: 正确
	Time:16 ms
	Memory:4908 kb
****************************************************************/