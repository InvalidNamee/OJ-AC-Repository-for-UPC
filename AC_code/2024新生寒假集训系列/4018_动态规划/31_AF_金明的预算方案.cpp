#include <cstdio>
#include <vector>

using namespace std;

int v[70], p[70], q[70];
vector<int> att[70];
int f[3210];

int main() {
    int n, m;
    scanf("%d%d", &m, &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d%d%d", &v[i], &p[i], &q[i]);
        v[i] /= 10;
        if (q[i]) att[q[i]].push_back(i);
    }
    m /= 10;
    for (int i = 1; i <= n; ++i) {
        if (q[i]) continue;
        for (int j = m; j; --j) {
            if (j - v[i] >= 0) f[j] = max(f[j], f[j - v[i]] + v[i] * p[i]);
            if (att[i].size() >= 1) {
                if (j - v[i] - v[att[i][0]] >= 0) f[j] = max(f[j], f[j - v[i] - v[att[i][0]]] + v[i] * p[i] + v[att[i][0]] * p[att[i][0]]); 
            }
            if (att[i].size() == 2) {
                if (j - v[i] - v[att[i][1]] >= 0) f[j] = max(f[j], f[j - v[i] - v[att[i][1]]] + v[i] * p[i] + v[att[i][1]] * p[att[i][1]]);
                if (j - v[i] - v[att[i][0]] - v[att[i][1]] >= 0) f[j] = max(f[j], f[j - v[i] - v[att[i][0]] - v[att[i][1]]] + v[i] * p[i] + v[att[i][0]] * p[att[i][0]] + v[att[i][1]] * p[att[i][1]]);
            }
        }
    }
    printf("%d\n", f[m] * 10);
    return 0;
}
/**************************************************************
	Problem: 3479
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1376 kb
****************************************************************/