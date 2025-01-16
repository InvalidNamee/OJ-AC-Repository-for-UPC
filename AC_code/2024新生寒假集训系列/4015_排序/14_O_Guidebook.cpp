#include <iostream>
#include <algorithm>

using namespace std;

pair<string, pair<int, int>> a[110];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i].first >> a[i].second.first;
        a[i].second.first *= -1;
        a[i].second.second = i + 1;
    }
    sort(a, a + n);
    for (int i = 0; i < n; ++i) {
        cout << a[i].second.second << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 14472
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:2236 kb
****************************************************************/