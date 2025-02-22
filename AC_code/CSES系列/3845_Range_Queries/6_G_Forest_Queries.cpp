#include <cstdio>

const int N = 1010;

int s[N][N];

int main() {
    int n, q;
    scanf("%d%d", &n, &q);
    getchar();
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            s[i][j] = getchar() == '*';
            s[i][j] = s[i][j] + s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1];
        }
        getchar();
    }
    while (q--) {
        int x1, y1, x2, y2;
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        printf("%d\n", s[x2][y2] - s[x2][y1 - 1] - s[x1 - 1][y2] + s[x1 - 1][y1 - 1]);
    }
    return 0;
}
/**************************************************************
	Problem: 23117
	Language: C++
	Result: 正确
	Time:95 ms
	Memory:5220 kb
****************************************************************/