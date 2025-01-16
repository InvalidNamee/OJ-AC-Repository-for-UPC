#include <iostream>
#include <algorithm>

using namespace std;

struct file {
    string a, b;
    int id;
    bool f;

    file() {
        f = false;
    }
    file(string s, int id) : id(id) {
        int p = -1;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '.') {
                p = i;
                break;
            }
        }
        if (p != -1) {
            a = s.substr(0, p), b = s.substr(p + 1);
            f = true;
        }
        else {
            a = s;
            b = "";
            f = false;
        }
    }

    bool operator <(const file &t) {
        if (f != t.f) return f > t.f;
        else if (f) return b == t.b ? a < t.a : b < t.b;
        else return a < t.a;
    }
} a[110];
int ans[110];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        string s;
        cin >> s;
        a[i] = file(s, i);
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; ++i) {
        ans[a[i].id] = i;
    }
    for (int i = 1; i <= n; ++i) {
        printf("%d\n", ans[i]);
    }
    return 0;
}