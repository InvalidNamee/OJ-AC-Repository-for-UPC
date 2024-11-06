#include <cstdio>
#include <iostream>
#include <bitset>

using namespace std;

// bitset<10000001> p;
bool p[10000001];
int primes[664580];

int main() {
    int cnt = 0;
    for (int i = 2; i <= 10000000; ++i) {
        if (p[i]) continue;
        for (int j = 2; i * j <= 10000000; ++j) {
            p[i * j] = true;
        }
        primes[++cnt] = i;
        // cnt++;
    }
    // cout << cnt << endl;
    int n;
    scanf("%d", &n);
    while (n--) {
        int t;
        scanf("%d", &t);
        int l = 1, r = cnt;
        while (l < r) {
            int mid = l + r + 1 >> 1;
            if (primes[mid] < t) l = mid;
            else r = mid - 1;
        }
        if (abs(t - primes[l]) < abs(t - primes[l + 1])) printf("%d\n", primes[l]);
        else printf("%d\n", primes[l + 1]);
    }
    return 0;
}
/**************************************************************
	Problem: 5323
	Language: C++
	Result: 正确
	Time:563 ms
	Memory:14584 kb
****************************************************************/
