#include <iostream>

using namespace std;

bool check(string s) {
    if (s[0] != 'A') return false;
    int t = 0;
    for (int i = 1; i < s.length(); ++i) {
        if ((s[i] == 'C') && (i > 1 && i < s.length() - 1)) t++;
        else if (isupper(s[i])) return false;
    }
    return t == 1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    if (check(s)) cout << "AC" << endl;
    else cout << "WA" << endl;
    return 0;
}
/**************************************************************
	Problem: 11670
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
