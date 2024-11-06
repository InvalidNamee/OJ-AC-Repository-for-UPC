#include <iostream>

using namespace std;

bool t[26];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int cnt = 0;
    string s;
    while (cin >> s) cnt++;
    cout << cnt << endl;
    return 0;
}
/**************************************************************
	Problem: 22657
	Language: C++
	Result: 正确
	Time:0 ms
	Memory:2384 kb
****************************************************************/
