#include <iostream>
#include <algorithm>

using namespace std;

int a[26];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    string s;
    cin >> n;
    while (n--) {
        for (int i = 0; i < 26; ++i) a[i] = 0;
        cin >> s;
        for (auto i : s) a[i - 'a']++;
        bool flag = true;
        for (auto i : s) if (a[i - 'a'] == 1) {
            cout << i << endl;
            flag = false;
            break;
        }
        if (flag) cout << "NO" << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 11104
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
