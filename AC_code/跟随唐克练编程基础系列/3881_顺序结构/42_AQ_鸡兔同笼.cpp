#include <cstdio>

int main() {
    int h, f;
    scanf("%d%d", &h, &f);
    int r = (f - h * 2) >> 1;
    printf("rabbit=%d,chicken=%d\n", r, h - r);
    return 0;
}
/**************************************************************
	Problem: 9684
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
