#include <cstdio>

int a[14];

int main() {
    int n, m, s = 0, mx = 0;
    for (int i = 1; i <= 13; ++i) scanf("%d", &a[i]), mx = mx > a[i] ? mx : a[i];
    scanf("%d%d", &n, &m);
    char c[110];
    scanf("%s", c);
    for (int i = 0; c[i] != 0; ++i) {
        int idx = 0;
        if (c[i] == 'A') idx = 1;
        else if (c[i] == 'J') idx = 11;
        else if (c[i] == 'Q') idx = 12;
        else if (c[i] == 'K') idx = 13;
        else if (c[i] == '1' && c[i + 1] == '0') idx = 10;
        else idx = c[i] - '0';
        s += a[idx];
    }
    printf("%d\n", s + m * mx);
    return 0;
}