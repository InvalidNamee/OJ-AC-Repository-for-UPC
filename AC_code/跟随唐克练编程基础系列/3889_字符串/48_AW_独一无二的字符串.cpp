#include <iostream>
#include <map>

using namespace std;

map<string, bool> mp;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    string s;
    cin >> n;
    while (n--) {
        cin >> s;
        mp[s] ^= 1;
    }
    for (auto i : mp) {
        if (i.second) {
            cout << i.first << endl;
            return 0;
        }
    }
    return 0;
}
/**************************************************************
	Problem: 11101
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2388 kb
****************************************************************/
