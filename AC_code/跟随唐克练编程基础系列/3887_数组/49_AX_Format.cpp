#include <cstdio>
#include <stack>

using namespace std;

stack<int> st;

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    a += b;
    if (a < 0) {
        a = -a;
        putchar('-');
    }
    while (a) {
        st.push(a % 1000);
        a /= 1000;
    }
    printf("%d", st.top());
    st.pop();
    while (!st.empty()) {
        printf(",%03d", st.top());
        st.pop();
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 9841
	Language: C++
	Result: 正确
	Time:15 ms
	Memory:1360 kb
****************************************************************/
