#include <cstdio>
#include <iostream>

using namespace std;

const int N = 1000010;

int a[N];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    int i = 1, j = n;
    while (a[i] == a[i + 1]) i++;
    while (a[j] == a[j - 1]) j--;
    if (a[i] != a[j]) {
        printf("%d\n", min(n - i, j - 1));
    }
    else {
        printf("%d\n", max(j - i - 1, 0));
    }
    return 0;
}