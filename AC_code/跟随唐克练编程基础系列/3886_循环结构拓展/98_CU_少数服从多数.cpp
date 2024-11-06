#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    int a = 0, b = 0;
    while (n--) {
        int t;
        scanf("%d", &t);
        if (t) a++;
        else b++;
    }
    if (a > b) printf("Yes\n");
    else printf("No\n");
    return 0;
}
/**************************************************************
	Problem: 1013
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
