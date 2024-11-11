#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int x, n;
    scanf("%d%d", &x, &n);
    int s = 0;
    for (int i = 0; i < n; ++i) {
        if ((i + x) % 7 <= 5 && (i + x) % 7 > 0) {
            s += 250;
        }
    }
    printf("%d\n", s);
    return 0;
}