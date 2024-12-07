#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<int> st;
set<string> tt;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s, t;
    cin >> s;
    while (cin >> t) {
        if (t.length() == s.length()) {
            tt.insert(t);
        }
    }
    for (int i = 1; i <= 25; ++i) {
        for (auto j : tt) {
            bool f = 1;
            for (int k = 0; k < s.length(); ++k) {
                if ((s[k] - 'a' + i) % 26 + 'a' != j[k]) {
                    f = 0;
                    break;
                }
            }
            if (f) st.push_back(i);
        }
    }
    if (st.empty()) {
        cout << "Error" << endl;
        return 0;
    }
    cout << st.size() << endl;
    for (auto i : st) {
        cout << i << ' ';
    }
    cout << endl;
    return 0;
}