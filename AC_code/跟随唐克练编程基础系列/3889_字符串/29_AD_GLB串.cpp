#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

string check(string s) {
    for (int i = 2; i < s.length(); ++i) {
        if (s[i - 2] == 'G' && s[i - 1] == 'L' && s[i] == 'B') return "YES";
    }
    return "NO";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        cout << check(s) << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 9867
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:2384 kb
****************************************************************/
