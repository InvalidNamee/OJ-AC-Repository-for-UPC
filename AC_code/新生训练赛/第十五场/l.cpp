#include <iostream>
#include <set>

using namespace std;

set<int> s;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    char c;
    int num;
    cin >> c >> num;
    if (num == 1) num = 14;

    int n;
    cin >> n;
    while (n--) {
        char cc;
        int nnum;
        cin >> cc >> nnum;
        if (nnum == 1) nnum = 14;
        if (cc == c && nnum > num) s.insert(nnum);
    }
    cout << s.size() << endl;
    if (!s.empty()) {
        cout << c << ' ';
        int t = *s.begin();
        if (t == 14) cout << "Ace" << endl;
        else if (t == 11) cout << "Jack" << endl;
        else if (t == 12) cout << "Queen" << endl;
        else if (t == 13) cout << "King" << endl;
        else cout << t << endl;
    }
    return 0;
}