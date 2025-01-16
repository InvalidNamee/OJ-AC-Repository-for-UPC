#include <cstdio>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if (a & b & 1) printf("Odd\n");
    else printf("Even\n");
    return 0;
}