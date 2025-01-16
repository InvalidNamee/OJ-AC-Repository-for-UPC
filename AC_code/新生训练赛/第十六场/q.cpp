#include <cstdio>

int main() {
    int a, i = 1;
    long long s = 1, cur = 1;
    scanf("%d", &a);
    while (1) {
        cur = cur * 3;
        s += cur;
        i++;
        if (s > a) {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}