#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s, t = "";
    int a = 0, b = 0;
    while (cin >> s) t += s;
    for (auto i : t) {
        if (i == 'F') {
            a++;
        }
        else if (i == 'A') {
            b++;
        }
        else break;
        if ((a >= 11 || b >= 11) && abs(a - b) > 1) {
            cout << a << ':' << b << endl;
            a = 0, b = 0;
        }
    }
    if (a || b) {
        cout << a << ':' << b << endl;
    }
    return 0;
}