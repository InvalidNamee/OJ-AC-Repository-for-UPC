#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

int t[26];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        memset(t, 0, sizeof(t));
        for (auto i : s) t[i - 'a']++;
        bool flag = true;
        for (auto i : s) {
            if (t[i - 'a'] == 1) {
                cout << i << endl;
                flag = false;
                break;
            }
        }
        if (flag) cout << "NO" << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 9868
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
