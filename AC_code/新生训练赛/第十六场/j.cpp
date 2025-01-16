#include <cstdio>

int main() {
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    printf("%d\n", (x - z) / (y + z));
    return 0;
}