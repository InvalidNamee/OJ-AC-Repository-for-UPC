#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

bool flag[9][9];
int p[9], ans;

void dfs(int d) {
    if (d == 9) {
        ans ++;
        return;
    }
    for (int i = 1; i <= 8; ++i) {
        if (flag[d][i]) {
            bool f = true;
            for (int j = 1; j < d; ++j) {
                if (i == p[j] || abs(i - p[j]) == d - j) {
                    f = false;
                    break;
                }
            }
            if (f) {
                p[d] = i;
                dfs(d + 1);
            }
        }
    }
}

int main() {
    for (int i = 1; i <= 8; ++i) {
        for (int j = 1; j <= 8; ++j) {
            flag[i][j] = getchar() == '.';
        }
        getchar();
    }
    dfs(1);
    printf("%d\n", ans);
    return 0;
}
/**************************************************************
	Problem: 23008
	Language: C++
	Result: 正确
	Time:9 ms
	Memory:2024 kb
****************************************************************/