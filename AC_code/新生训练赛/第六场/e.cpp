#include <cstdio>

int main() {
    int op;
    scanf("%d", &op);
    if (op == 1) printf("Hello World\n");
    else {
        int a, b;
        scanf("%d%d", &a, &b);
        printf("%d\n", a + b);
    }
    return 0;
}