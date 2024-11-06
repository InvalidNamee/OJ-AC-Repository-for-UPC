#include <iostream>
#include <map>

using namespace std;

map<string, string> mp;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    while (getline(cin, s), s != "") {
        string t1, t2;
        int flag = 0;
        for (auto i : s) {
            if (i == ' ') {
                flag = 1;
                continue;
            }
            if (!flag) t1 += i;
            else t2 += i;
        }
        mp[t2] = t1;
    }
    while (cin >> s) {
        if (mp.find(s) == mp.end()) cout << "eh" << endl;
        else cout << mp[s] << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 2160
	Language: C++
	Result: 正确
	Time:136 ms
	Memory:13344 kb
****************************************************************/
