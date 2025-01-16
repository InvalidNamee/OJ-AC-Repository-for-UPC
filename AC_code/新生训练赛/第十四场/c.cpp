#include <cstdio>
#include <iostream>

using namespace std;

int a[10000];

int main() {
    int n, ave = 0, res = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        ave += a[i];
    }
    ave /= n;
    for (int i = 0; i < n; ++i) {
        res += abs(ave - a[i]);
    }
    printf("%d\n", res >> 1);
    return 0;
}