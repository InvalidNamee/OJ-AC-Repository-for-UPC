#include <cstdio>
#include <deque>

using namespace std;

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n, a, b, d;
        scanf("%d%d%d", &n, &a, &b);
        for (int i = 1; i <= 50; ++i) {
            if ((b - a) % i == 0 && (b - a) / i < n) {
                d = i;
                break;
            }
        }
        deque<int> ans;
        for (int i = a; i <= b; i += d) {
            ans.push_back(i);
        }
        while (ans.size() < n && ans.front() - d > 0) {
            ans.push_front(ans.front() - d);
        }
        while (ans.size() < n) ans.push_back(ans.back() + d);
        for (auto i : ans) printf("%d ", i);
        printf("\n");
    }
    return 0;
}