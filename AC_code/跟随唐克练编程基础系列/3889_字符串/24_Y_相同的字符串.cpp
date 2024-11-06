#include <iostream>
#include <map>

using namespace std;

map<string, int> mp;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        mp[s]++;
    }
    int cnt = 0;
    for (auto i : mp) {
        if (i.second > 1) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
/**************************************************************
	Problem: 9872
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2388 kb
****************************************************************/
