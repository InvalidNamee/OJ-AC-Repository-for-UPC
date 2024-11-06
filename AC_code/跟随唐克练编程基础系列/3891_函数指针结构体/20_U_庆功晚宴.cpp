#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    pair<int, string> mx = {0, ""};
    int n;
    cin >> n;
    while (n--) {
        int a = 0, b;
        string s;
        cin >> s;
        for (int i = 0; i < 5; ++i) cin >> b, a += b;
        mx = max(mx, {a, s});
    }
    cout << mx.second << ' ' << mx.first << endl;
    return 0;
}
/**************************************************************
	Problem: 3283
	Language: C++
	Result: 正确
	Time:10 ms
	Memory:2224 kb
****************************************************************/
