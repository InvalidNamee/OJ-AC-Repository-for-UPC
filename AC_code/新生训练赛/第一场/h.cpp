#include <stack>
#include <cstdio>

using namespace std;

int main() {
    stack<int> st;
    int t;
    while (scanf("%d", &t), t) {
        st.push(t);
    }
    while (!st.empty()) {
        printf("%d ", st.top());
        st.pop();
    }
    printf("\n");
    return 0;
}