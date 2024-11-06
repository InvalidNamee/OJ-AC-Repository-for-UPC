#include <iostream>

using namespace std;

char a[26];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string k, m;
    cin >> k >> m;
    for (int i = 0; i < m.length(); ++i) {
        if (isupper(m[i])) m[i] = ((m[i] - towlower(k[i % k.length()]) + 'a' - 'A' + 26) % 26 + 'A');
        else m[i] = ((m[i] - towlower(k[i % k.length()]) + 26) % 26 + 'a');
    }
    cout << m << endl;
    return 0;
}
/**************************************************************
	Problem: 1708
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
