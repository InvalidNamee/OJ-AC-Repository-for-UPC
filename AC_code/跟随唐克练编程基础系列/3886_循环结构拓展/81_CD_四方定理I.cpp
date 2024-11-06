#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int l = (int)sqrt(n);
    for (int i = 1; i <= l; ++i) {
        for (int j = 1; j <= i; ++j) {
            if (i * i + j * j >= n) {
                if (i * i + j * j == n) printf("%d=%d*%d+%d*%d\n", n, i, i, j, j);
                break;
            }
            for (int k = 1; k <= j; ++k) {
                if (i * i + j * j + k * k >= n) {
                    if (i * i + j * j + k * k == n) printf("%d=%d*%d+%d*%d+%d*%d\n", n, i, i, j, j, k, k);
                    break;
                }
                for (int t = 1; t <= k; ++t) {
                    if (i * i + j * j + k * k + t * t >= n) {
                        if (i * i + j * j + k * k + t * t == n) printf("%d=%d*%d+%d*%d+%d*%d+%d*%d\n", n, i, i, j, j, k, k, t, t);
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
/**************************************************************
	Problem: 10042
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
