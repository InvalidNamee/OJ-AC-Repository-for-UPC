#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    long long x, y;
    scanf("%lld%lld", &x, &y);
    if (abs(x - y) % 7 == 0) printf("%lld\n", abs(x - y) / 7);
    else printf("%lld\n", min((abs(x - y) % 7 + 7) % 7, 7 - ((abs(x - y) % 7 + 7) % 7)));
    return 0;
}