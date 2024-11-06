#include <cstdio>
#include <cstring>

int main() {
    int n;
    long long ans = 1;
    scanf("%d", &n);
    for (int i = n - 1; i; --i) {
        ans = (ans + i) << 1;
    }
    printf("The monkey got %lld peachs in first day.\n", ans);
    return 0;
}
/**************************************************************
	Problem: 10039
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
