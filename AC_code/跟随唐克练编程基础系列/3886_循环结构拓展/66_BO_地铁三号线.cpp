#include <cstdio>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n, s = 0; 
        scanf("%d", &n);
        for (int i = 0; i < n; ++i) {
            int t;
            scanf("%d", &t);
            s += t;
        }
        printf("%d\n", s + (n - 2) * 8);
    }
    return 0;
}
/**************************************************************
	Problem: 1041
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
