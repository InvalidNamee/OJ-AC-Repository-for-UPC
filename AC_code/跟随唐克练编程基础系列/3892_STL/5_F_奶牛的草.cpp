#include <iostream>
#include <map>
#include <vector>

using namespace std;

map<string, vector<int>> mp;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string a;
        int b;
        cin >> a >> b;
        mp[a].push_back(b);
    }
    cin >> m;
    for (int i = 0; i < m; ++i) {
        string a;
        cin >> a;
        if (mp[a].empty()) continue;
        for (auto i : mp[a]) cout << i << endl;
        // cout << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 18771
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2388 kb
****************************************************************/
