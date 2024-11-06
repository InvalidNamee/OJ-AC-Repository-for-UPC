#include <cstdio>
#include <cstring>

int Gcd(int n, int m) {
    return m ? Gcd(m, n % m) : n;
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    printf("the greatest common divisor is %d\n", Gcd(n, m));
    printf("the least common multiple is %lld\n", (long long)n * m / Gcd(n, m));
    return 0;
}
/**************************************************************
	Problem: 9687
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:1236 kb
****************************************************************/
