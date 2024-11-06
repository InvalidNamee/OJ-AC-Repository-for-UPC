#include <iostream>

using namespace std;

char a[26];

bool check(char c) {
    return c == '~' || c == '!' || c == '@' || c == '#' || c == '$' || c == '%' || c == '^';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    while (n--) {
        string s;
        bool a[] = {0, 0, 0, 0};
        cin >> s;
        for (auto i : s) {
            if (isupper(i)) a[0] = true;
            else if (islower(i)) a[1] = true;
            else if (isdigit(i)) a[2] = true;
            else if (check(i)) a[3] = true;
        }
        if (s.length() >= 8 && a[0] + a[1] + a[2] + a[3] >= 3) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1943
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
