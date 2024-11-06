#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    char c;
    cin >> s >> c;
    reverse(s.begin(), s.end());
    int t = s.find(c);
    if (t == EOF) cout << EOF << endl;
    else cout << s.length() - t << endl;
    return 0;
}
/**************************************************************
	Problem: 11103
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
