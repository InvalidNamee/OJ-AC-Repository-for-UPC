#include <cstdio>
#include <iostream>

using namespace std;

int a[200][200];

int main() {
    int n, m;
    pair<int, pair<int, int>> mx = {-0x3f3f3f3f, {0, 0}}, mn = {0x3f3f3f3f, {0, 0}};
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d", &a[i][j]);
            mx = max(mx, {a[i][j], {i, j}});
            mn = min(mn, {a[i][j], {i, j}});
        }
    }
    swap(a[mx.second.first][mx.second.second], a[mn.second.first][mn.second.second]);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 22605
	Language: C++
	Result: 正确
	Time:11 ms
	Memory:2376 kb
****************************************************************/
