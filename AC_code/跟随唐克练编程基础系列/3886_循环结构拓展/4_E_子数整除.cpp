#include <cstdio>

bool check(int n, int k) {
    return n % 1000 % k == 0 && n / 10 % 1000 % k == 0 && n / 100 % k == 0;
}

int main() {
    int k;
    bool flag = 0;
    scanf("%d", &k);
    for (int i = 10000; i <= 30000; ++i) {
        if (check(i, k)) printf("%d\n", i), flag = true;
    }
    if (!flag) printf("No\n");
    return 0;
}
/**************************************************************
	Problem: 22433
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
