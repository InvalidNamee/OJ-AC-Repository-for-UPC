#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    for (auto i : s) {
        if (isupper(i)) cout << (char)((i - 'A' + 4) % 26 + 'A');
        else cout << (char)((i - 'a' + 4) % 26 + 'a');
    }
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 9883
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
