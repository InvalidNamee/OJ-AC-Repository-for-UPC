#include <cstdio>
#include <cstring>

struct Trie
{
    int ls, rs;
    bool v = false;
} tr[100010];
int tot = 1;
long long res, l;

void add(char *s) {
    int u = 1;
    int len = strlen(s);
    for (int i = 0; i < len; ++i) {
        if (s[i] == '0') {
            if (!tr[u].ls) tr[u].ls = ++tot;
            u = tr[u].ls;
        } 
        else {
            if (!tr[u].rs) tr[u].rs = ++tot;
            u = tr[u].rs;
        }
    }
}

void dfs(int u, int dep) {
    if (dep == l) return;
    if (!tr[u].ls && !tr[u].rs) return;
    if (!tr[u].ls) res ^= (l - dep) ^ -(l - dep);
    else dfs(tr[u].ls, dep + 1);
    if (!tr[u].rs) res ^= (l - dep) ^ -(l - dep);
    else dfs(tr[u].rs, dep + 1);
}

int main() {
    char s[100010];
    int n;
    scanf("%d%lld", &n, &l);
    for (int i = 0; i < n; ++i) {
        scanf("%s", s);
        add(s);
    }
    dfs(1, 0);
    printf(res ? "Alice\n" : "Bob\n");
    return 0;
}
