#include <cstdio>
#include <map>

using namespace std;

int s[110];
map<int, pair<int, int>> mp;

int main() {
    int n;
    double ave = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        s[i] = a + b + c;
        mp[-s[i]].second++;
        ave += s[i];
        // printf("%d\n", s[i]);
    }
    ave /= n;
    int m = 0;
    for (auto &i : mp) {
        i.second.first = m + 1;
        m += i.second.second;
    }
    for (int i = 1; i <= n; ++i) {
        printf("%d %.1f\n", mp[-s[i]].first, (double)s[i] - ave);
    }
    return 0;
}