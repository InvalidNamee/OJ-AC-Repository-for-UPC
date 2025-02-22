#include <cstdio>
#include <cmath>
#include <cstring>
#include <iostream>
// #define int long long

using namespace std;

bool v[(1 << 16) + 1];

void print(const int &num, const int &n) {
    for (int i = n; i; --i) {
        printf("%d", num >> (i - 1) & 1);
    }
    printf("\n");
}

signed main() {
    // freopen("data", "r", stdin);
    int n;
    scanf("%d", &n);
    int now = 0;
    v[now] = true;
    for (int i = 0; i < (1 << n); ++i) {
        print(now, n);
        for (int j = 0; j < n; ++j) {
            if (!v[now ^ (1 << j)]) {
                now ^= (1 << j);
                v[now] = true;
                break;
            }
        }
    }    
    return 0;
}
/**************************************************************
	Problem: 23004
	Language: C++
	Result: 正确
	Time:172 ms
	Memory:2088 kb
****************************************************************/