#include <iostream>
#include <ctime>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    int res = s.length();
    for (int i = 1; i < s.length(); ++i) {
        if (s[i] != s[i - 1]) res = min(res, max(i, (int)s.length() - i));
    }
    cout << res << endl;
    return 0;
}