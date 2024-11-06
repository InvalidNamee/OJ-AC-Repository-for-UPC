#include <cstdio>

int main() {
    int n, cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int s;
        scanf("%d", &s);
        if (s < 60) {
            printf("no\n");
            return 0;
        }
        else if (s >= 90) cnt++;
    }
    if (cnt >= 5) printf("1\n");
    else if (cnt >= 3) printf("2\n");
    else if (cnt == 2) printf("3\n");
    else printf("no\n");
    return 0;
}
/**************************************************************
	Problem: 22553
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
