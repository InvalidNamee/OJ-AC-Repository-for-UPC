#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    int res = 0;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '+') res++;
        else res--; 
    }
    cout << res << endl;
    return 0;
}
/**************************************************************
	Problem: 9268
	Language: C++
	Result: 正确
	Time:10 ms
	Memory:2384 kb
****************************************************************/
