#include <cstdio>
#include <stack>

using namespace std;

int a[1010];
bool b[1010];
stack<int> st;

int main() {
    int n, l = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = n; i; --i) {
        if (!b[i]) {
            do {
                b[a[++l]] = true;
                st.push(a[l]);
            } while (st.top() != i);
            printf("%d ", i);
            st.pop();
        }
        while (!st.empty() && st.top() >= i) {
            printf("%d ", st.top());
            st.pop();
        }
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 21340
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1368 kb
****************************************************************/
