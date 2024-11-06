#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, m, t;
    cin >> n >> m >> t;
    for (int i = 0; i < t; ++i) {
        cout << i % n + 1 << ' ' << i % m + 1 << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 11566
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2380 kb
****************************************************************/
