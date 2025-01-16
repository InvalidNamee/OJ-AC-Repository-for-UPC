#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s, t;
    cin >> s >> t;
    if (s.length() < t.length()) {
        bool f = true;
        for (auto i : s) {
            if (t.find(i) == -1) {
                f = false;
                break;
            } 
        }
        if (f) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    int mn = 128, mx = 0;
    for (int i : s) mn = min(mn, i);
    for (int i : t) mx = max(mx, i);
    if (mn < mx) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}