#include <cstdio>
#include <map>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <iomanip>

using namespace std;

vector<pair<int, int>> pref[100010];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    vector<pair<int, int>> query(m);
    vector<string> ans(m);
    for (int i = 0; i < m; ++i) {
        scanf("%d%d", &query[i].first, &query[i].second);
        pref[query[i].first].push_back({query[i].second, i});
    }
    for (int i = 1; i <= n; ++i) {
        if (pref[i].empty()) continue;
        sort(pref[i].begin(), pref[i].end());
        for (int j = 0; j < pref[i].size(); ++j) {
            stringstream ss;
            ss << setw(6) << setfill('0') << i << setw(6) << setfill('0') << j + 1;
            ans[pref[i][j].second] = ss.str();
        }
    }
    for (int i = 0; i < m; ++i) cout << ans[i] << endl;
    return 0;
}