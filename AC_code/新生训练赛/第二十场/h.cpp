#include <iostream>

using namespace std;

int main() {
    int n;
    int s = 0, a = 0, b = 0, c = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int d, e, f;
        cin >> d >> e >> f;
        s = max(s, d + e + f);
        a = max(a, d);
        b = max(b, e);
        c = max(c, f);
    }
    cout << s << ' ' << a << ' ' << b << ' ' << c << endl;
    return 0;
}