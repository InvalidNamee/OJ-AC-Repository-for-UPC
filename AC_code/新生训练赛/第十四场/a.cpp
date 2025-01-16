#include <iostream>
#include <map>
#include <unordered_set>

using namespace std;

map<string, unordered_set<string>> mp;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        string a, b;
        cin >> a >> b;
        mp[a].insert(b);
        mp[b].insert(a);
    }
    int t = 0;
    for (auto i : mp) {
        t = max(t, (int)i.second.size());
    }
    cout << t << endl;
    return 0;
}