#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

inline int read() {
    char c = getchar();
    int res = 0;
    while (!isdigit(c)) c = getchar();
    while (isdigit(c)) {
        res = res * 10 + c - 48;
        c = getchar();
    }
    return res;
}

int w[20];
int f[1 << 20][2];

int main() {
    memset(f, 0x3f, sizeof(f));
    int n = read(), lim = read();
    for (int i = 0; i < n; ++i) {
        w[i] = read();
    }
    f[0][0] = 1, f[0][1] = 0;
    for (int i = 1; i < (1 << n); ++i) {
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                int t = i ^ (1 << j);
                int a[2] = {f[t][0], f[t][1]};
                if (f[t][1] + w[j] <= lim) a[1] += w[j];
                else a[0]++, a[1] = w[j];
                if (a[0] < f[i][0] || (a[0] == f[i][0] && a[1] < f[i][1])) {
                    f[i][0] = a[0], f[i][1] = a[1];
                }
            }
        }
    }
    printf("%d\n", f[(1 << n) - 1][0]);
    return 0;
}
/**************************************************************
	Problem: 23066
	Language: C++
	Result: 正确
	Time:5078 ms
	Memory:10216 kb
****************************************************************/
