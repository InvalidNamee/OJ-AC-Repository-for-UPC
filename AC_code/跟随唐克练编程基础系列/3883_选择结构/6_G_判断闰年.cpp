#include <cstdio>

bool judge(int n) {
    if (!(n % 100)) return n % 400 == 0;
    else return n % 4 == 0;
}

int main() {
    int n, m;
    scanf("%d", &n);
    printf(judge(n) ? "%d是闰年\n" : "%d不是闰年\n", n);
    return 0;
}
/**************************************************************
	Problem: 8114
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
