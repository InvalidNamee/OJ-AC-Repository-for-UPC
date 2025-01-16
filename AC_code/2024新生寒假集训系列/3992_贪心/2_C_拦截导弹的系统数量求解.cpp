#include <cstdio>
#include <cstring>

int a[1010], b[1010];

int main() {
    int n; 
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    int k = 0;
    b[0] = 0x3f3f3f3f;
    for (int i = 1; i <= n; ++i) {
        int p = 0;
        for (int j = 1; j <= k; ++j) {
            if (a[i] <= b[j] && b[j] < b[p]) {
                p = j;
            }
        }
        if (p) b[p] = a[i];
        else b[++k] = a[i];
    }
    printf("%d\n", k);
    return 0;
}
/**************************************************************
	Problem: 23837
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1244 kb
****************************************************************/