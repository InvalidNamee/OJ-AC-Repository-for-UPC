#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s, t = "";
    bool f = false;
    cin >> s;
    int p = 0;
    while (p < s.length()) {
        if (s[p] == 'a' || s[p] == 'c') {
            if (p + 1 != s.length() - 1 && (s[p + 1] == 'a' || s[p + 1] == 'c')) {
                while (p != s.length() && (s[p] == 'a' || s[p] == 'c')) p++;
            }
            else t += s[p++];
        }
        else t += s[p++];
    }
    cout << t << endl;
    return 0;
}