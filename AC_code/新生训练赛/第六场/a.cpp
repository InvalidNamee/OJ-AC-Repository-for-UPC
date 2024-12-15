#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    long long a, b;
    scanf("%lld%lld", &a, &b);
    double res = a + ((b + 9) / 10) * 0.01;
    while (res > 40) res /= 2;
    printf("%.3f\n", res);
    return 0;
}