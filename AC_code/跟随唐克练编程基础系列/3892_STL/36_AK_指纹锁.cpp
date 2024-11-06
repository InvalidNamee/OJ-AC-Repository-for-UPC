#include <iostream>
#include <set>

using namespace std;

set<int> key;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int m, k;
    cin >> m >> k;
    while (m--) {
        string s;
        int x;
        cin >> s >> x;
        if (s == "add") {
            auto t = key.lower_bound(x - k);
            if (t != key.end() && *t <= x + k) continue;
            key.insert(x);
        }
        else if (s == "del") {
            auto t = key.lower_bound(x - k);
            while (t != key.end() && *t <= x + k) {
                t = key.erase(t);
            }
        }
        else {
            auto t = key.lower_bound(x - k);
            if (t != key.end() && *t <= x + k) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}
/**************************************************************
	Problem: 21345
	Language: C++
	Result: 正确
	Time:277 ms
	Memory:2388 kb
****************************************************************/
