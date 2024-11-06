#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    int t = 0;
    cin >> s;
    for (auto i : s) if (isdigit(i)) t = t * 10 + i - 48;
    cout << t << endl;
    return 0;
}
/**************************************************************
	Problem: 9887
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
