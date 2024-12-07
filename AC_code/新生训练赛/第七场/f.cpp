#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    double T, a;
    int p = 0;
    double mn = 1e9;
    scanf("%lf%lf", &T, &a);
    for (int i = 1; i <= n; ++i) {
        double h;
        scanf("%lf", &h);
        double deg = T - 0.006 * h;
        if (fabs(deg - a) < mn) {
            mn = fabs(deg - a);
            p = i;
        }
    }
    printf("%d\n", p);
    return 0;
}