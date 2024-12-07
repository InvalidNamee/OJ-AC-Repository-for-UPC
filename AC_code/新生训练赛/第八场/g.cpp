#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    int mn = 0x3f3f3f3f;
    for (int i = 3; i <= s.length(); ++i) {
        mn = min(mn, abs(stoi(s.substr(i - 3, 3)) - 753));
    }
    cout << mn << endl;
    return 0;
}