#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int s = 0, t;
        for (int i = 0; i < 5; ++i) {
            scanf("%d", &t);
            s += t;
        }
        printf("%c\n", s % 26 + 'a');
    }
    return 0;
}
/**************************************************************
	Problem: 1026
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:1236 kb
****************************************************************/
