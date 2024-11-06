#include <iostream>
#include <iomanip>
#include <map>

using namespace std;

map<string, int> mp;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    int tot = 0;
    while (getline(cin, s)) {
        mp[s]++;
        tot++;
    }
    for (auto i : mp) {
        cout << i.first << ' ' << fixed << setprecision(4) << (double)i.second / tot * 100 << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1453
	Language: C++
	Result: 正确
	Time:201 ms
	Memory:2520 kb
****************************************************************/
