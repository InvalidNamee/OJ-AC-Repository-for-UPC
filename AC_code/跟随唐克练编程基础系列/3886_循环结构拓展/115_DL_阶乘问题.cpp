#include <cstdio>
#include <cmath>

int main() {
    int n, cnt = 0, res = 1;
    scanf("%d", &n);
    for (int i = 5; i <= n; i *= 5) {
        cnt += n / i;
    }
    for (int i = 1; i <= n; ++i) {
        int t = i;
        while (t % 5 == 0) t /= 5;
        while (t % 2 == 0 && cnt) t /= 2, cnt--;
        res *= t;
        res %= 10; 
    }
    printf("%d\n", res);
    return 0;
}
/**************************************************************
	Problem: 1821
	Language: C++
	Result: 正确
	Time:256 ms
	Memory:1236 kb
****************************************************************/
