#include <iostream>
#include <algorithm>

using namespace std;

string s[100000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }
    sort(s, s + n);
    for (int i = 0; i < n; ++i) {
        cout << s[i] << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 11605
	Language: C++
	Result: 正确
	Time:47 ms
	Memory:5516 kb
****************************************************************/
