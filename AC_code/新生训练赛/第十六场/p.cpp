#include <cstdio>
#include <algorithm>

using namespace std;

int a[60];

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n;
        scanf("%d", &n);
        for (int i = 1; i <= n; ++i) {
            scanf("%d", &a[i]);
        }
        sort(a + 1, a + n + 1);
        bool f = true;
        for (int i = 2; i <= n; ++i) {
            if (abs(a[i] - a[i - 1]) > 1) {
                f = false; 
                break;
            }
        }
        if (f) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}