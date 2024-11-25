#include <cstdio>
#include <algorithm>

using namespace std;

int t[] = {0, 1, 2}, s[3];

int main() {
    int res = 0;
    for (int i = 0; i < 3; ++i) scanf("%d", &s[i]);
    for (int i = 0; i < 6; ++i) {
        res = max(res, s[t[0]] * 10 + s[t[1]] + s[t[2]]);
        next_permutation(t, t + 3);
    }
    printf("%d\n", res);
    return 0;
}