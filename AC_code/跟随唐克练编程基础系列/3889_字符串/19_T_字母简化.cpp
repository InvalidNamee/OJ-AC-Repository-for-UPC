#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    while (n--) {
        int l;
        string s;
        cin >> l >> s;
        int cnt = 1;
        char ls = s[0];
        for (int i = 1; i < l; ++i) {
            if (s[i] != ls) {
                cout << cnt << ls;
                cnt = 1;
                ls = s[i];
            }
            else cnt++;
        }
        if (cnt) cout << cnt << ls;
        cout << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 9879
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
