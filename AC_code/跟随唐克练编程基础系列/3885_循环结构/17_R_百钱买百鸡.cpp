#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    for (int i = 0; i <= n && i * 5 <= m; ++i) {
        for (int j = 0; i + j <= n && i * 5 + j * 3 <= m; ++j) {
            for (int k = 0; i + j + k <= n && i * 5 + j * 3 + k / 3 <= m; k += 3) {
                if (i * 5 + j * 3 + k / 3 == m && i + j + k == n) {
                    printf("%d %d %d\n", i, j, k);
                }
            }
        }
    }    
    return 0;
}

/**************************************************************
	Problem: 20249
	Language: C++
	Result: 正确
	Time:13 ms
	Memory:2220 kb
****************************************************************/
