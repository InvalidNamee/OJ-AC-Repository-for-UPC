#include <iostream>
#include <vector>

using namespace std;

vector<int> v[2];
vector<bool> dp[2];
int tot[2];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    int x, y, cur = 0;
    bool f = 0; // 0 - x; 1 - y;
    bool haveT = false;
    cin >> s >> x >> y;
    s += 'T';
    for (auto i : s) {
        if (i == 'T') {
            if (!haveT) {
                haveT = true;
                x -= cur;
                cur = 0;
            }
            else if (cur) v[f].push_back(cur), cur = 0;
            f ^= 1;
        }
        else cur++, tot[f]++;
    }
    dp[0] = vector<bool>(tot[0] * 2 + 1, 0);
    dp[1] = vector<bool>(tot[1] * 2 + 1, 0);
    dp[0][tot[0]] = dp[1][tot[1]] = true;
    f = 0;
    for (auto i : v[f]) {
        vector<bool> t(tot[f] * 2 + 1, 0);
        for (int j = 0; j <= 2 * tot[f]; ++j) {
            if (0 <= j - i && j - i <= 2 * tot[f] && dp[f][j - i]) t[j] = true;
            else if (0 <= j + i && j + i <= 2 * tot[f] && dp[f][j + i]) t[j] = true;
        }
        dp[f] = t;
    }
    f = 1;
    for (auto i : v[f]) {
        vector<bool> t(tot[f] * 2 + 1, 0);
        for (int j = 0; j <= 2 * tot[f]; ++j) {
            if (0 <= j - i && j - i <= 2 * tot[f] && dp[f][j - i]) t[j] = true;
            else if (0 <= j + i && j + i <= 2 * tot[f] && dp[f][j + i]) t[j] = true;
        }
        dp[f] = t;
    }
    if (dp[0][x + tot[0]] && dp[1][y + tot[1]]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}