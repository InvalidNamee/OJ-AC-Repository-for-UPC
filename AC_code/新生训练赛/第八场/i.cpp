#include <cstdio>
#include <cmath>
#include <map>

using namespace std;

map<int, int> mp;
int a[30], l;
int f[30][76];

void work(int n) {
    int l = sqrt(n);
    for (int i = 2; i <= l; ++i) {
        while (n % i == 0) {
            mp[i]++;
            n /= i;
        }
    }
    if (n != 1) mp[n]++;
}


int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        work(i);
    }
    for (auto i : mp) {
        a[++l] = i.second;
    }
    f[0][1] = 1;
    for (int i = 1; i <= l; ++i) {
        for (int j = 1; j <= 75; ++j) {
            for (int k = 0; k <= min(75, a[i]); ++k) {
                if (j % (k + 1) == 0)
                    f[i][j] += f[i - 1][j / (k + 1)];
            }
        }
    }
    printf("%d\n", f[l][75]);
    return 0;
}

/*
16 * 81 * 5 * 5
*/