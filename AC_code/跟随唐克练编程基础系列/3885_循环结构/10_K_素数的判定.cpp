#include <cstdio>
#include <cmath>

bool PrimeJudge(int n) {
    int l = sqrt(n);
    for (int i = 2; i <= l; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    printf(PrimeJudge(n) ? "Yes\n" : "No\n");
    return 0;
}
/**************************************************************
	Problem: 8673
	Language: C++
	Result: 正确
	Time:13 ms
	Memory:1236 kb
****************************************************************/
