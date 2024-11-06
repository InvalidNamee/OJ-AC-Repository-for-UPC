#include <iostream>
#include <map>

using namespace std;

map<string, int> mp;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    string s;
    cin >> n;
    while (n--) {
        cin >> s;
        mp[s]++;
    }
    cin >> s;
    cout << mp[s] << endl;
    return 0;
}
/**************************************************************
	Problem: 2064
	Language: C++
	Result: 正确
	Time:10 ms
	Memory:2388 kb
****************************************************************/
