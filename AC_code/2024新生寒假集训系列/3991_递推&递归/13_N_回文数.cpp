#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    long long n;
    int cnt = 0;
    cin >> n;
    while (true) {
        string s = to_string(n), t = s;
        reverse(t.begin(), t.end());
        if (s == t) break;
        n += stoll(t);
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
/**************************************************************
	Problem: 23813
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/