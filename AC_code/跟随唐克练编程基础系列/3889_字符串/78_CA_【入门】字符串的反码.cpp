#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    for (auto i : s) {
        if (isupper(i)) cout << (char)('A' + 25 - (i - 'A'));
        else cout << (char)('a' + 25 - (i - 'a'));
    }
    cout << endl;   
    return 0;
}
/**************************************************************
	Problem: 22648
	Language: C++
	Result: 正确
	Time:0 ms
	Memory:2384 kb
****************************************************************/
