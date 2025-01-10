#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    pair<int, int> a[3];
    int s[3], t[] = {0, 4, 2, 1};
    int d;
    scanf("%d%d%d%d", &a[0].first, &a[1].first, &a[2].first, &d);
    a[0].second = 0, a[1].second = 1, a[2].second = 2;
    sort(a, a + 3);
    int pre = -1, p = 0;
    for (int i = 2; i >= 0; --i) {
        if (a[i].first == pre) {
            s[a[i].second] = s[a[i + 1].second]; 
        }
        else {
            p = 3 - i;
            s[a[i].second] = t[p];
            if (a[i].first > d) s[a[i].second] += t[p];
            pre = a[i].first;
        }
    }
    for (int i = 0; i < 3; ++i) {
        printf("%d ", s[i]);
    }
    printf("\n");
    return 0;
}