#include <cstdio>
#include <cstring>
#include <stack>

using namespace std;

int a[1010];
bool flag[1010];

int main() {
    int n;
    while (scanf("%d", &n), n != 0) {
        while (scanf("%d", &a[1]), a[1] != 0) {
            memset(flag, 0, sizeof(flag));
            stack<int> st, t;
            for (int i = n; i; --i) st.push(i);
            for (int i = 2; i <= n; ++i) {
                scanf("%d", &a[i]);
            }
            bool ok = true;
            for (int i = 1; i <= n; ++i) {
                while (!flag[a[i]]) {
                    flag[st.top()] = true;
                    t.push(st.top());
                    st.pop();
                }
                if (t.top() == a[i]) t.pop();
                else {
                    ok = false;
                    break;
                }
            }
            printf(ok ? "Yes\n" : "No\n");
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 1303
	Language: C++
	Result: 正确
	Time:64 ms
	Memory:1368 kb
****************************************************************/
