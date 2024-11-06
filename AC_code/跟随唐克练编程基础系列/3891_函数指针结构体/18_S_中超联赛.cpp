#include <iostream>
#include <algorithm>

using namespace std;

pair<int, string> a[17];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i].second;
        int b, c, d;
        cin >> b >> c >> d;
        a[i].first = b * 3 + c;
    }
    sort(a, a + n);
    for (int i = n - 1; i >= 0; --i) {
        cout << n - i << ' ' << a[i].second << ' ' << a[i].first << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1021
	Language: C++
	Result: 正确
	Time:8 ms
	Memory:2392 kb
****************************************************************/
