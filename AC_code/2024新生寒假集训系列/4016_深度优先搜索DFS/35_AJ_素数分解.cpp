#include <cstdio>
#include <cmath>

int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199};
int res;

void dfs(int u, int n, int cnt = 0) {
    if (n < 0) return;
    if (u == -1) {
        if (n == 0) res = res > cnt ? res : cnt;
        return;
    }
    dfs(u - 1, n - primes[u], cnt + 1);
    dfs(u - 1, n, cnt);
}

int main() {
    int n;
    scanf("%d", &n); 
    dfs(45, n);
    printf("%d\n", res);   
    return 0;
}
/**************************************************************
	Problem: 10424
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/