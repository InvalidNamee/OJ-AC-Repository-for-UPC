#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    int n, m;
    getline(cin, s);
    cin >> n >> m;
    s.erase(n - 1, m);
    cout << s << endl;
    return 0;
}
/**************************************************************
	Problem: 9876
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
