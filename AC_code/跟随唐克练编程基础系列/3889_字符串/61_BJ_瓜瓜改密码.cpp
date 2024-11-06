#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    for (auto i : s) {
        if (isupper(i)) cout << (char)tolower(i);
        else if (islower(i)) cout << (char)toupper(i);
        else cout << i;
    }
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 3077
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
