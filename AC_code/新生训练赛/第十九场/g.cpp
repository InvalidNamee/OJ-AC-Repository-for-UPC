#include <cstdio>

int main() {
    int w;
    scanf("%d", &w);
    printf(!(w & 1) && w != 2 ? "YES\n" : "NO\n");
    return 0;
}