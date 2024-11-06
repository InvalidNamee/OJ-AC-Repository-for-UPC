#include <cstdio>

int main() {
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    printf("%02d:%02d\n", (a + c + (b + d) / 60) % 24, (b + d) % 60);
    return 0;
}

/**************************************************************
	Problem: 3098
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
