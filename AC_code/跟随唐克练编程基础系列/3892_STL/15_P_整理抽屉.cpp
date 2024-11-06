#include <iostream>
#include <map>

using namespace std;

map<string, int> mp;

int main() {
    string s;
    int n, mx = 0;
    cin >> n;
    while (n--) {
        cin >> s;
        mp[s]++;
    }
    for (auto i : mp) {
        if (i.second > mx) {
            s = i.first;
            mx = i.second;
        }
    }
    cout << s << endl;
    return 0;
}
/**************************************************************
	Problem: 10461
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2228 kb
****************************************************************/
