#include <cstdio>

int main() {
    int n;
    bool flag = true;
    while (scanf("%1d", &n) == 1) {
        for (int i = 2; i >= 0; --i) {
            if (n >> i & 1) {
                printf("1");
                flag = false;
            }
            else if (flag) continue;
            else printf("0");
        }
    }
    if (flag) printf("0");
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 23832
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/