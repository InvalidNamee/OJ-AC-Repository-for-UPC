#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    for (int i = 0; i <= n; ++i) {
        string tmp = s.substr(0, i) + t;
        if (tmp.substr(0, n) == s) {
            cout << tmp.length() << endl;
            break;
        }
    }
    return 0;
}