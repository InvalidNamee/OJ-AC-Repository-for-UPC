#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int a[1000];
vector<int> q;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a, a + n);
    for (int i = 0; i < n; ++i) {
        int p = -1;
        for (int j = 0; j < q.size(); ++j) {
            if (q[j] <= a[i]) {
                if (p == -1) p = j;
                else if (q[j] > q[p]) p = j;
            }
        }
        if (p == -1) q.push_back(1);
        else q[p]++;
    }
    printf("%ld\n", q.size());
    return 0;
}