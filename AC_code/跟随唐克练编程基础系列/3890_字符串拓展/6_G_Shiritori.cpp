#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string a, b, c;
    cin >> a >> b >> c;
    if (a.back() == b.front() && b.back() == c.front()) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

/**************************************************************
	Problem: 6548
	Language: C++
	Result: 正确
	Time:2 ms
	Memory:2384 kb
****************************************************************/
