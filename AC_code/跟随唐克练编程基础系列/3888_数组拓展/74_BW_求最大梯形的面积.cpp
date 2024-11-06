#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, mx = 0;
    cin >> n;
    while (n--) {
        int a, b, h;
        cin >> a >> b >> h;
        mx = max(mx, (a + b) * h);
    }
    cout << fixed << setprecision(1) << (double)mx / 2 << endl;
    return 0;
}
/**************************************************************
	Problem: 22611
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:2380 kb
****************************************************************/
