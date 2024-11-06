#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s, t;
    getline(cin, s);
    cin >> t;
    for (auto i : s) {
        if (t.find(i) == EOF) cout << i; 
    }
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 11099
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
