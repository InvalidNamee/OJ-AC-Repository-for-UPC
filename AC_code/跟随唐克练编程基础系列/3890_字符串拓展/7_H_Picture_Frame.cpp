#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m + 2; ++i) cout << '#';
    cout << endl;
    for (int i = 0; i < n; ++i) {
        cout << '#';
        string s;
        cin >> s;
        cout << s;
        cout << '#' << endl;
    }
    for (int i = 0; i < m + 2; ++i) cout << '#';
    cout << endl;
    return 0;
}

/**************************************************************
	Problem: 6555
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
