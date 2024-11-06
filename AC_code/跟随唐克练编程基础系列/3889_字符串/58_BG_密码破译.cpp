#include <iostream>

using namespace std;

char a[26];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s = "IUJTMFHXOKBQEAPZCDWRYNVSGL";
    for (int i = 0; i < s.length(); ++i) {
        a[s[i] - 'A'] = 'A' + i;
    }
    int n;
    cin >> n;
    while (n--) {
        cin >> s;
        for (int i = 0; i < s.length(); ++i) {
            cout << a[s[i] - 'A'];
        }
        cout << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1020
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
