#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

map<string, int> mp;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    int mx = 0;
    while (n--) {
        string a[3];
        for (int i = 0; i < 3; ++i) cin >> a[i];
        sort(a, a + 3);
        string s;
        for (int i = 0; i < 3; ++i) s += a[i];
        mp[s]++;
        mx = max(mx, mp[s]);
    }
    cout << mx << endl;
    return 0;
}
/**************************************************************
	Problem: 2447
	Language: C++
	Result: 正确
	Time:3 ms
	Memory:2528 kb
****************************************************************/
