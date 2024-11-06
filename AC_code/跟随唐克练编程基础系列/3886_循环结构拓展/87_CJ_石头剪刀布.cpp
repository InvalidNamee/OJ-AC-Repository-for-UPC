#include <cstdio>

int table[3][3] = {
    {1, 2, 0},
    {0, 1, 2},
    {2, 0, 1}
};

int main() {
    int n;
    scanf("%d", &n);
    int s1 = 0, s2 = 0;
    while (n--) {
        int a, b;
        scanf("%d%d", &a, &b);
        s1 += table[a][b];
        s2 += table[b][a];
    }
    printf("%d %d\n", s1, s2);
    return 0;
}
/**************************************************************
	Problem: 12605
	Language: C++
	Result: 正确
	Time:3 ms
	Memory:1236 kb
****************************************************************/
