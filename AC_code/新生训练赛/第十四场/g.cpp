#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, res = 0;
    cin >> n;
    string s;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        reverse(s.begin(), s.end());
        res += stoi(s);
    }
    cout << res << endl;
    return 0;
}