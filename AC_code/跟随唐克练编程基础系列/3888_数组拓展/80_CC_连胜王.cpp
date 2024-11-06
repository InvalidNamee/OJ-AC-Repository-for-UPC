#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    int ls = 0, l = 0, mx = 0, p = 0;
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        if (t == ls) l++;
        else l = 1;
        if (mx < l) mx = l, p = t;
        ls = t;
    }
    printf("%d\n", p);
    return 0;
}
/**************************************************************
	Problem: 22617
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:1236 kb
****************************************************************/
