#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int a, b, x, y;
    scanf("%d%d%d%d", &a, &b, &x, &y);
    printf("%d\n", min(abs(a - b), min(abs(a - x) + abs(y - b), abs(a - y) + abs(x - b))));
    return 0;
}