#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    string a[4];
    cin >> s;
    for (auto i : s) {
        if (islower(i)) a[0] += i;
        else if (isupper(i)) a[1] += i;
        else if (isdigit(i)) a[2] += i;
        else a[3] += i;
    }
    int cnt = 0;
    for (int i = 0; i < 4; ++i) {
        if (!a[i].empty()) cnt++;
    }
    cout << "password level:" << cnt << endl;
    for (int i = 0; i < 4; ++i) {
        if (a[i].empty()) cout << "(Null)" << endl;
        else cout << a[i] << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 19328
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
