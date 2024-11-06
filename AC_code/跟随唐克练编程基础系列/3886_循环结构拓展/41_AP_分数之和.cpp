#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    for (int p = 2; p <= 4; ++p) {
        for (int q = p; q + 3 * p >= q * p; ++q) {
            if (q + p < q * p)
                for (int r = q; q * r + p * r + 2 * p * q >= p * q * r; ++r) {
                    if (q * r + p * r + p * q < p * q * r)
                        for (int s = r; p * q * r + p * r * s + p * q * s + q * r * s >= p * q * r * s; ++s) {
                            if (p * q * r + p * r * s + p * q * s + q * r * s == p * q * r * s) {
                                printf("%d %d %d %d\n", p, q, r, s);
                            }
                        }
                }

        }
    }
    return 0;
}

/**************************************************************
	Problem: 22527
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
