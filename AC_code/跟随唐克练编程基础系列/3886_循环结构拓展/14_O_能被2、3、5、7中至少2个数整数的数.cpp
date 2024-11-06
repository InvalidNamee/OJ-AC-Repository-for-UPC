#include <cstdio>

bool check(int n) {
    return (n % 2 == 0) + (n % 3 == 0) + (n % 5 == 0) + (n % 7 == 0) >= 2; 
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        if (check(i)) printf("%d\n", i);
    }
    return 0;
}
/**************************************************************
	Problem: 22443
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
