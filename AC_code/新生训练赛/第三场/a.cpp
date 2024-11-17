#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    int mx = 0;
    scanf("%d%d%d", &a, &b, &c);
    mx = max(a, max(b, c));
    printf("%d\n", a + b + c - mx * 2 / 5);
    return 0;
}