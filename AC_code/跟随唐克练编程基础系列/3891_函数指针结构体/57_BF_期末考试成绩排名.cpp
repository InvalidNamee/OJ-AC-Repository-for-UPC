#include <iostream>
#include <algorithm>

using namespace std;

pair<pair<int, int>, string> a[100];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i].first.second >> a[i].second >> a[i].first.first;
        a[i].first.first = -a[i].first.first;
    }
    sort(a, a + n);
    for (int i = 0; i < n; ++i) {
        cout << a[i].first.second << ' ' << a[i].second << ' ' << -a[i].first.first << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 22050
	Language: C++
	Result: 正确
	Time:16 ms
	Memory:2392 kb
****************************************************************/
