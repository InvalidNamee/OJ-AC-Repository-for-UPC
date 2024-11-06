#include <iostream>
#include <map>

using namespace std;

map<string, int> mp;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, mx = 0;
    string s;
    cin >> n;
    while (n--) {
        cin >> s;
        string t;
        for (auto i : s) {
            if (!t.length() || i != t.back()) t += i;
        }
        mp[t]++;
        mx = max(mx, mp[t]);
    }
    for (auto i : mp) {
        if (i.second == mx) {
            cout << i.first << endl;
            return 0;
        }
    }
    return 0;
}
/**************************************************************
	Problem: 19269
	Language: C++
	Result: 正确
	Time:10 ms
	Memory:2388 kb
****************************************************************/
