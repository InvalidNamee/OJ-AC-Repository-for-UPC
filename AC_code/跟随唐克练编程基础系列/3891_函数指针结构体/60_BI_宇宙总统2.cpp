#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

map<string, int> mp;
pair<string, int> a[1000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        mp[s]++;
    }
    int l = 0;
    for (auto i : mp) {
        a[l++] = {i.first, i.second};
    }
    sort(a, a + l, [](pair<string, int> a, pair<string, int> b) {
        return a.second == b.second ? a.first > b.first : a.second > b.second;
    });
    for (int i = 0; i < l; ++i) {
        cout << a[i].first << ' ' << a[i].second << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 22053
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:2440 kb
****************************************************************/
