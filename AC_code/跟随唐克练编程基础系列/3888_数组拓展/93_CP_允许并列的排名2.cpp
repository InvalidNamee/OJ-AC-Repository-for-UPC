#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

map<int, int> mp;
int a[1000], b[1000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n, [](int a, int b) {
        return a > b;
    });
    for (int i = 0; i < n; ++i) {
        if (!mp[b[i]]) mp[b[i]] = i + 1;
    }
    for (int i = 0; i < n; ++i) {
        cout << mp[a[i]] << ' ';
    }
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 22630
	Language: C++
	Result: 正确
	Time:10 ms
	Memory:2392 kb
****************************************************************/
