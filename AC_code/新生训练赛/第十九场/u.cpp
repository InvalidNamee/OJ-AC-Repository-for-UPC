#include <cstdio>
#include <queue>

using namespace std;

priority_queue<int> q1, q2;

int main() {
    int n, v;
    scanf("%d%d", &n, &v);
    int ls1 = 0, ls2 = 0;
    for (int i = 1; i <= n; ++i) {
        int a, b;
        scanf("%d%d", &a, &b);
        if (a == 1) q1.push(b);
        else q2.push(b);
    }
    int res = 0;
    while (!q1.empty() && !q2.empty() && v >= 2) {
        if (q1.top() * 2 >= q2.top()) {
            res += q1.top();
            v--;
            ls1 = q1.top();
            q1.pop();
        }
        else {
            res += q2.top();
            v -= 2;
            ls2 = q2.top();
            q2.pop();
        }
    }
    if (q1.empty() && q2.empty() || !v) {
        printf("%d\n", res);
        return 0;
    }
    else {
        if (q1.empty()) {
            while (!q2.empty() && v >= 2) {
                res += q2.top();
                ls2 = q2.top();
                v -= 2;
                q2.pop();
            }
            if (!v || q2.empty()) {
                printf("%d\n", res);
            }
            else {
                printf("%d\n", max(res, res - ls1 + q2.top()));
            }
        }
        else if (q2.empty()){
            while (!q1.empty() && v) {
                v--;
                res += q1.top();
                q1.pop();
            }
            printf("%d\n", res);
        }
        else {
            printf("%d\n", max(res - ls1 + q2.top(), res + q1.top()));
        }
    }
    return 0;
}

