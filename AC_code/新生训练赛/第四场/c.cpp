#include <iostream>

using namespace std;

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int t[2];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string a, b;
    cin >> a >> b;
    if (a.length() != b.length()) {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }
    t[0] = t[1] = -1;
    for (int i = 0; i < a.length(); ++i) {
        if (isdigit(a[i]) && isdigit(b[i])) {
            if (t[0] == -1) t[0] = (b[i] - a[i] + 10) % 10;
            else if (t[0] != (b[i] - a[i] + 10) % 10) {
                cout << "IMPOSSIBLE" << endl;
                return 0;
            }
        }
        else if (islower(a[i]) && islower(b[i])) {
            if (t[1] == -1) t[1] = (b[i] - a[i] + 26) % 26;
            else if (t[1] != (b[i] - a[i] + 26) % 26) {
                cout << "IMPOSSIBLE" << endl;
                return 0;
            }
        }
        else {
            cout << "IMPOSSIBLE" << endl;
            return 0;
        }
    }
    if (t[0] != -1 && t[1] != -1) {
        int r = max(t[0], t[1]);
        while (true) {
            if ((r - t[0]) % 10 == 0 && (r - t[1]) % 26 == 0) {
                cout << r << endl;
                return 0;
            }
            r++;
        }
    }
    else if (t[0] == -1) cout << t[1] << endl;
    else if (t[1] == -1) cout << t[0] << endl;
    return 0;
}
