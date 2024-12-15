#include <iostream>

using namespace std;

long long burger[51];

long long work(int n, long long l, long long r, long long x) {
    if (x < l) return 0;
    else if (x >= r) return burger[n];
    long long mid = l + r >> 1;
    long long res = work(n - 1, l + 1, mid - 1, x);
    if (x == mid) res += 1;
    else if (x > mid) res += work(n - 1, mid + 1, r - 1, x) + 1;
    return res;
}

int main() {
    int n;
    long long x;
    cin >> n >> x;
    burger[0] = 1;
    for (int i = 1; i <= n; ++i) {
        burger[i] = burger[i - 1] * 2 + 1;
    }
    long long tot = 1;
    for (int i = 1; i <= n; ++i) {
        tot = tot * 2 + 3;
    }
    cout << work(n, 1, tot, x) << endl;
    return 0;
}
