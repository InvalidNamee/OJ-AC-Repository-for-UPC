#include <iostream>
#include <vector>

using namespace std;

vector<string> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    int t = s.find(',');
    for (int i = t + 1; i < s.length(); ++i) cout << s[i];
    cout << ',';
    for (int i = 0; i < t; ++i) cout << s[i];
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 22650
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
