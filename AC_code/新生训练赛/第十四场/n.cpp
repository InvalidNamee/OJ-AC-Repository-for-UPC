#include <cstdio>
#include <unordered_set>

using namespace std;

unordered_set<int> s;
int a[10000];

int main() {
    int n, cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        if (s.find(a[i]) != s.end()) cnt++;
        for (int j = 0; j < i; ++j) {
            s.insert(a[i] + a[j]);
        }
    }
    printf("%d\n", cnt);
    return 0;
}