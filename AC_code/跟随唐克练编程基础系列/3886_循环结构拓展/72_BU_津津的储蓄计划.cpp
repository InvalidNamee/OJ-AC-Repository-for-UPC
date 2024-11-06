#include <cstdio>

int main() {
    int now = 0, mom = 0;
    for (int i = 1; i <= 12; ++i) {
        int o;
        scanf("%d", &o);
        now += 300;
        if (now < o) {
            printf("%d\n", -i);
            return 0;
        }
        int t = (now - o) / 100 * 100;
        now -= t + o, mom += t;
    }
    printf("%d\n", now + mom + mom / 5);
    return 0;
}
/**************************************************************
	Problem: 3493
	Language: C++
	Result: 正确
	Time:3 ms
	Memory:1236 kb
****************************************************************/
