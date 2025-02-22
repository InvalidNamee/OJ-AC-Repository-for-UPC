#include <cstdio>
#include <climits>
#include <map>
#include <vector>

using namespace std;

typedef long long ll;

const int N = 200010;

struct stack {
    int val[N], l;
    void push(int v) {
        val[++l] = v;
    }

    int top() {
        return val[l];
    }

    void pop() {
        l--;
    }

    int search(int idx) {
        int l = 1, r = this->l;
        while (l < r) {
            int mid = l + r >> 1;
            if (idx >= val[mid]) r = mid;
            else l = mid + 1;
        }
        return val[l];
    }
} st;
int a[N];
ll s[N], f[N];
vector<pair<int, int>> query[N];
ll ans[N];

int main() {
    int n, q;
    scanf("%d%d", &n, &q);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        s[i] = s[i - 1] + a[i];
    }

    for (int i = 1; i <= q; ++i) {
        int l, r;
        scanf("%d%d", &l, &r);
        query[l].push_back({r, i});
    }

    a[n + 1] = INT_MAX;
    st.push(n + 1);
    for (int i = n; i; --i) {
        while (a[i] >= a[st.top()]) st.pop();
        f[i] = f[st.top()] + (long long)a[i] * (st.top() - i);
        if (!query[i].empty())
            for (auto it : query[i]) {
                int r = st.search(it.first);
                if (r > it.first) ans[it.second] = (long long)a[i] * (it.first - i + 1) - (s[it.first] - s[i - 1]);
                else ans[it.second] = f[i] - f[r] + (long long)a[r] * (it.first - r + 1) - (s[it.first] - s[i - 1]);
            }
        st.push(i);
    }
    for (int i = 1; i <= q; ++i) {
        printf("%lld\n", ans[i]);
    }
    return 0;
}
/**************************************************************
	Problem: 23125
	Language: C++
	Result: 正确
	Time:246 ms
	Memory:16524 kb
****************************************************************/