#include <iostream>
#include <map>

using namespace std;

map<string, map<string, int>> mp;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T;
    bool flag = false;
    cin >> T;
    while (T--) {
        if (flag) cout << endl;
        else flag = true;
        mp.clear();
        int m;
        cin >> m;
        while (m--) {
            string s, t;
            int c;
            cin >> s >> t >> c;
            mp[t][s] += c;
        }
        for (auto i : mp) {
            cout << i.first << endl;
            for (auto j : i.second) {
                cout << "   |----" << j.first << '(' << j.second << ')' << endl;
            }
        }
    }
    return 0;
}
/**************************************************************
	Problem: 4601
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2396 kb
****************************************************************/
