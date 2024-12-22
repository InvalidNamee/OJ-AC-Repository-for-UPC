#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    string s;
    cin >> n;
    while (n--) {
        cin >> s;
        int ss = 0;
        for (auto i : s) {
            ss += i - '0';
        }
        if (ss % 3 == 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}