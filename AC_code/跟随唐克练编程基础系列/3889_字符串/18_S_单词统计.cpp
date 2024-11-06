#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    int cnt = 0;
    while (cin >> s, s != "stop") {
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
/**************************************************************
	Problem: 9880
	Language: C++
	Result: 正确
	Time:15 ms
	Memory:2384 kb
****************************************************************/
