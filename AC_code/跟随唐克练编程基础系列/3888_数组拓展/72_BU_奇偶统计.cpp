#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    int t;
    int a = 0, b = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> t;
            if (t & 1) a++;
            else b++;
        }
    }
    cout << a << ' ' << b << endl;
    return 0;
}
/**************************************************************
	Problem: 22609
	Language: C++
	Result: 正确
	Time:11 ms
	Memory:2380 kb
****************************************************************/
