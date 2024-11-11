#include <cstdio>

int a[100];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        int cnt = 0;
        for (int j = 0; j < i; ++j) {
            if (a[j] < a[i]) cnt++;
        }
        printf("%d ", cnt);
    }
    printf("\n");
    return 0;
}