#include <cstdio>

template<typename T>
T calc(T a, T b, int op) {
    if (op == 0) return a + b;
    else if (op == 1) return a - b;
    else if (op == 2) return a * b;
    else return a / b; 
}

int main() {
    int a, b, c, d, e, cnt = 0;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            for (int k = 0; k < 4; ++k) {
                if (calc(calc(calc(a, b, i), c, j), d, k) == e) cnt++;
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}