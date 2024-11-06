#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    string s;
    cin >> n;
    while (n--) {
        cin >> s;
        int t = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (isdigit(s[i])) t = t * 10 + s[i] - 48;
        }
        cout << (long long)t * 513 << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 4811
	Language: C++
	Result: 正确
	Time:3 ms
	Memory:2384 kb
****************************************************************/
