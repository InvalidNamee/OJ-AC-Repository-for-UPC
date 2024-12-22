#include <cstdio>
#include <algorithm>
#include <iostream>

using namespace std;

string f[10010];
int a[10];
bool v[10010];
int mp[] = {0,2,5,5,4,5,6,3,7,6};

bool le(string a, string b) {
    if (a.length() != b.length()) return a.length() < b.length();
    else {
        for (int i = a.length() - 1; i >= 0; --i) {
            if (a[i] != b[i]) return a[i] < b[i];
        }
        return false;
    }
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= m; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a + 1, a + m + 1);
    m = unique(a + 1, a + m + 1) - a;
    f[0] = "";
    v[0] = true;
    for (int i = 1; i <= m; ++i) {
        for (int j = mp[a[i]]; j <= n; ++j) {
            if (v[j - mp[a[i]]]) {
                v[j] = true;
                if (f[j].length() == 0) f[j] = f[j - mp[a[i]]] + char(a[i] + '0');
                else if (le(f[j], f[j - mp[a[i]]] + char(a[i] + '0'))) {
                    f[j] = f[j - mp[a[i]]] + char(a[i] + '0');
                }
            }
        }
    }
    for (int i = f[n].length() - 2; i >= 0; --i) printf("%c", f[n][i]);
    printf("\n");
    return 0;
}

/*

*/