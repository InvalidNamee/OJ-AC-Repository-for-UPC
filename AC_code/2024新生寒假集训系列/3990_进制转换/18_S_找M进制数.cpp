#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, m;
    int cnt = 0;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        bool valid = true;
        string s;
        cin >> s;
        for (auto i : s) {
            int t = isdigit(i) ? i - 48 : i - 'A' + 10;
            if (t >= m) {
                valid = false;
                break;
            }
        }
        cnt += valid;
    }
    printf("%d\n", cnt);
    return 0;
}
/**************************************************************
	Problem: 9759
	Language: C++
	Result: 正确
	Time:6 ms
	Memory:2384 kb
****************************************************************/