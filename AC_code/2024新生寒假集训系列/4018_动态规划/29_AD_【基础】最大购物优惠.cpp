#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;

int f[110][110];
vector<int> plan[110][110];
int v[110], m[110], val[110];

int main() {
    int V, M, n;
    scanf("%d%d%d", &V, &M, &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d%d%d", &v[i], &m[i], &val[i]);
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = M; j >= m[i]; --j) {
            for (int k = V; k >= v[i]; --k) {
                if (f[j - m[i]][k - v[i]] + val[i] > f[j][k]) {
                    f[j][k] = f[j - m[i]][k - v[i]] + val[i];
                    plan[j][k] = plan[j - m[i]][k - v[i]];
                    plan[j][k].push_back(i);
                }
            }
        }
    }
    printf("%d\n", f[M][V]);
    for (auto i : plan[M][V]) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 23898
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2556 kb
****************************************************************/