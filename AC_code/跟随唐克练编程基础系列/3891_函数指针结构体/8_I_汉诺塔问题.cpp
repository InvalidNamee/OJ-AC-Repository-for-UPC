#include <cstdio>

void mv(int d, char l, char r, char m) {
    if (d == 0) {
        return;
    }
    mv(d - 1, l, m, r);
    printf("%c->%c\n", l, r);
    mv(d - 1, m, r, l);
}

int main() {
    int n;
    scanf("%d", &n);
    mv(n, 'A', 'C', 'B');
    return 0;
}
/**************************************************************
	Problem: 23660
	Language: C++
	Result: 正确
	Time:105 ms
	Memory:1236 kb
****************************************************************/
