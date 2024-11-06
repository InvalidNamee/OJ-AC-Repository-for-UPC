#include <iostream>

using namespace std;

typedef long long ll;

int c[10010], y[10010];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    string s;
    cin >> n >> s;
    int t = 0, res = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'V') {
            t++;
            res += 1 + (t > 2);
        }
        else if (s[i] == 'T') {
            t = 0;
        }
        else t = 0, res--;
    }
    cout << res << endl;
    return 0;
}
/**************************************************************
	Problem: 22642
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2464 kb
****************************************************************/
