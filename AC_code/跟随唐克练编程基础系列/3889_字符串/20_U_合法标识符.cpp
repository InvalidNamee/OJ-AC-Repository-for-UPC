#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    if (isdigit(s[0])) {
        cout << "NO" << endl;
    }
    else {
        for (auto i : s) {
            if (!isdigit(i) && !isalpha(i) && i != '_') {
                cout << "NO" << endl;
                return 0;
            }
        }
        cout << "YES" << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 9878
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
