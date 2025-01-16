#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d\n", min(b / a, c));
    return 0;
}