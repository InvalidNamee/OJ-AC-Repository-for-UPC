#include <iostream>

using namespace std;

int a[10000];
int n, k;

bool check(int mid) {
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] >= mid) cnt++;
    }
    return cnt < k;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin >> n >> k;
    for (int i = 0; i < n; ++i) cin >> a[i];
    int l = -32768, r = 32767;
    while (l < r) {
        int mid = l + r + 1 >> 1;
        if (check(mid)) r = mid - 1;
        else l = mid;
    }
    cout << l << endl;
    return 0;
}
/**************************************************************
	Problem: 22637
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2420 kb
****************************************************************/
