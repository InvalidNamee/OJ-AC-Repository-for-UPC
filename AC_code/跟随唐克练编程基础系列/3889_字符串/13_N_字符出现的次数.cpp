#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    char c;
    int t = 0;
    getline(cin, s);
    cin >> c;
    for (auto i : s) t += c == i;
    cout << t << endl;
    return 0;
}
/**************************************************************
	Problem: 9885
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
