#include <iostream>
#include <sstream>

using namespace std;

bool yuan(char c) {
    return c == 'a' || c == 'e';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    string s, t, ans;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; ++i) {
        if (yuan(s[i])) { // v
            t += s[i];
        }
        else { // c
            if (t.length() == 0) t += s[i];
            else if (i == n - 1 || !yuan(s[i + 1])) t += s[i];
            else {
                ans += "." + t;
                t = s[i];
            }
        }
    }
    if (t.length()) ans += "." + t;
    cout << ans.substr(1) << endl;
    return 0;
}