#include <cstdio>

int main() {
    int n;
    bool flag = false;
    scanf("%d", &n);
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= n; ++j) {
            if (i + j > n) break;
            for (int k = 0; k <= n; k += 10) {
                if (i + j + k > n) break;
                if (5 * i + 2 * j + k / 10 == 120 && i + j + k == n) printf("%d %d %d\n", i, j, k), flag = true;
            }
        }
    }
    if (!flag) printf("No output\n");
    return 0;
}
/**************************************************************
	Problem: 8679
	Language: C++
	Result: 正确
	Time:14 ms
	Memory:1236 kb
****************************************************************/
