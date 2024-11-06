#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int a[200];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    int s = 0;
    for (int i = 1; i < n - 1; ++i) {
        s += a[i];
    }
    cout << fixed << setprecision(1) << (double)s / (n - 2) << endl;
    for (int i = 1; i < n - 1; ++i) {
        cout << a[i] << ' ';
    }
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 22631
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
