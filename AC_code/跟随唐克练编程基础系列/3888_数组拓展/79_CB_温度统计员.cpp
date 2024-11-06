#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    int ls = 0, l = 0, mx = 0;
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        if (t > ls) l++;
        else l = 1;
        mx = mx > l ? mx : l;
        ls = t;
    }
    printf("%d\n", mx);
    return 0;
}
/**************************************************************
	Problem: 22616
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
