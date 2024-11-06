#include <iostream>

using namespace std;

bool check(char c) {
    return c == 'A' || c == 'C' || c == 'G' || c == 'T';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    int h = 0, t = -1;
    int ans = 0;
    while (t < (int)s.length()) {
        t++;
        if (check(s[t])) ans = max(ans, t - h + 1);
        else h = t + 1;      
    }
    cout << ans << endl;
    return 0;
}
/**************************************************************
	Problem: 12055
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
