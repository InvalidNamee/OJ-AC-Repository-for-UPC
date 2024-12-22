#include <cstdio>
#include <algorithm>

using namespace std;

pair<pair<int, int>, int> a[1000];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int j, k, l, m;
        scanf("%d:%d%d:%d", &j, &k, &l, &m);
        a[i] = {{j * 60 + k + l * 60 + m, j * 60 + k}, i + 1};
    }
    sort(a, a + n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", a[i].second);
    }
    return 0;
}