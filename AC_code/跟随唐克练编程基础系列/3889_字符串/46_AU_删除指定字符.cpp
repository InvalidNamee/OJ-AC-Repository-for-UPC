#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    char c;
    getline(cin, s);
    cin >> c;
    for (auto i : s) if (i != c) cout << i;
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 11098
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
