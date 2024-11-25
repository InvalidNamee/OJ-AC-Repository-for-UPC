#include <cstdio>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if (a * 4 + b * 6 >= 600 && b >= 40) printf("Yes\n");
    else printf("No\n");
    return 0;
}