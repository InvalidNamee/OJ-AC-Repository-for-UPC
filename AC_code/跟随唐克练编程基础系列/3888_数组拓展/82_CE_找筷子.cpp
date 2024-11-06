#include <cstdio>

bool a[1010];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        a[t] ^= 1;
    }
    for (int i = 1; i <= 1000; ++i) {
        if (a[i]) {
            printf("%d\n", i);
            return 0;
        }
    }
    return 0;
}
/**************************************************************
	Problem: 22619
	Language: C++
	Result: 正确
	Time:14 ms
	Memory:1240 kb
****************************************************************/
