#include <cstdio>
#include <unordered_set>

using namespace std;

unordered_set<int> a, b;

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        a.insert(t);
    }
    for (int i = 0; i < m; ++i) {
        int t;
        scanf("%d", &t);
        b.insert(t);
    }
    for (auto i : b) {
        if (a.find(i) != a.end()) a.erase(i);
    }
    printf("%ld\n", a.size());
    return 0;
}