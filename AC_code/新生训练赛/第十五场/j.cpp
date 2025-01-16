#include <cstdio>
#include <algorithm>

using namespace std;

pair<int, int> a[100010];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d%d", &a[i].first, &a[i].second);
        a[i].second ^= 1;
    }
    sort(a + 1, a + n + 1);
    int r = 0, g = 0;
    for (int i = (n / 2 + 1); i <= n; ++i) {
        if (a[i].second) r++;
        else g++;
    }
    printf("%d %d\n", r, g);
    r = g = 0; 
    for (int i = 1; i <= (n >> 1); ++i) {
        if (a[i].second) r++;
        else g++;
    }
    printf("%d %d\n", r, g);
    return 0;
}