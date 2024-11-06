#include <iostream>

using namespace std;

char cmp(string s, string t) {
    if (s < t) return '<';
    else if (s == t) return '=';
    else return '>';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s, t;
    cin >> s >> t;
    cout << 's' << cmp(s, t) << 't' << endl;
    return 0;
}
/**************************************************************
	Problem: 9873
	Language: C++
	Result: 正确
	Time:13 ms
	Memory:2384 kb
****************************************************************/
