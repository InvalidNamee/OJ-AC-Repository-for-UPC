#include <iostream>
#include <algorithm>
 
using namespace std;

pair<char, char> a[200010];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s, t; 
    cin >> s >> t;
    for (int i = 0; i < s.length(); ++i) {
        a[i] = {s[i], t[i]};
    }
    sort(a, a + s.length());
    int n = unique(a, a + s.length()) - a;
    for (int i = 0; i < n; ++i) {
        if (a[i].first != a[i].second) {
            char t1 = a[i].first, t2 = a[i].second;
            for (int j = 0; j < n; ++j) {
                if (j < i && (a[j].first == t1 || a[j].first == t2)) {
                    cout << "No" << endl;
                    return 0;
                }
                else if (a[j].first == t1) a[j].first = t2;
                else if (a[j].first == t2) a[j].first = t1;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}
