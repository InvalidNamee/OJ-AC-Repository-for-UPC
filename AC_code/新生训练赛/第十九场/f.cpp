#include <iostream>
#include <deque>

using namespace std;

deque<int> pos[26];
int a[200010], n;
bool v[200010];

int tr[200010];

void add(int u) {
    for (; u <= n; u += u & -u) {
        tr[u]++;
    }
}

int query(int u) {
    int res = 0;
    for (; u; u -= u & -u) {
        res += tr[u];
    }
    return res;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        pos[s[i] - 'a'].push_back(i + 1);
    }
    n = s.length();
    // valid ? 
    bool f = false;
    for (int i = 0; i < 26; ++i) {
        if (pos[i].size() & 1) {
            if (n % 2 == 0 || f) {
                cout << -1 << endl;
                return 0;
            }
            f = true;
        }
    }

    for (int i = 1, m = 0; i <= n; ++i) {
        if (!a[i]) {
            if (pos[s[i - 1] - 'a'].size() == 1) {
                a[i] = n / 2 + 1;
            }
            else {
                a[i] = ++m;
                a[pos[s[i - 1] - 'a'].back()] = n - m + 1;
                pos[s[i - 1] - 'a'].pop_front();
                pos[s[i - 1] - 'a'].pop_back();
            }
        }
    }
    long long cnt = 0;
    for (int i = n; i; --i) {
        cnt += query(a[i]);
        add(a[i]);
    }
    cout << cnt << endl;
    return 0;
}