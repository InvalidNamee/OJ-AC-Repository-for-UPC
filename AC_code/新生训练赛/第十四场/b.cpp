#include <cstdio>
#include <queue>

using namespace std;

priority_queue<pair<double, int>> q;

int main() {
    int n, t;
    double res = 0;
    scanf("%d%d", &n, &t);
    for (int i = 0; i < n; ++i) {
        int a, b;
        scanf("%d%d", &a, &b);
        q.push({(double)b / a, a});
    }
    while (!q.empty() && t > 0) {
        auto tp = q.top();
        q.pop();
        if (t >= tp.second) {
            t -= tp.second;
            res += tp.first * tp.second;
        }
        else {
            res += tp.first * t;
            t = 0;
        }
    }
    printf("%.2f\n", res);
    return 0;
}