#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int r, c, n;
    scanf("%d%d", &r, &c);
    scanf("%d", &n);
    while (n--) {
        int s;
        scanf("%d", &s);
        int t = min(s % (c * 2), c * 2 - s % (c * 2) + 1);
        if (!t) t = 1;
        printf("%d %d\n", (s + c - 1) / c, t);
    }
    return 0;
}