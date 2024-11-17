#include <cstdio>
#include <cstring>
#include <set>

using namespace std;

set<int> pants[100010][2];

int main() {
    int n, m, k, p;
    scanf("%d%d%d%d", &n, &m, &k, &p);
    for (int i = 0; i < p; ++i) {
        char s[3];
        int a, b;
        scanf("%s%d%d", s, &a, &b);
        if (strcmp(s, "CP") == 0) pants[b][0].insert(a); 
        else pants[a][1].insert(b);
    }
    long long tot = (long long)n * m * k;
    for (int i = 1; i <= m; ++i) {
        long long a = pants[i][0].size(), b = pants[i][1].size();
        if (a && b) {
            tot -= a * k + b * n - a * b;
        }
        else if (a) {
            tot -= a * k;
        }
        else if (b) {
            tot -= b * n;
        }
    }
    printf("%lld\n", tot);
    return 0;
}