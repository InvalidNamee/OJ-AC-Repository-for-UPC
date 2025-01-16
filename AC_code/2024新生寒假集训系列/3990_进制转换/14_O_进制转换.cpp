#include <cstdio>
#include <stack>

using namespace std;

stack<int> st;

int main() {
    unsigned long long n;
    int N;
    scanf("%llu%d", &n, &N);
    if (n == 0) {
        printf("0\n");
        return 0;
    }
    while (n) {
        st.push(n % N);
        n /= N;
    }
    while (!st.empty()) {
        if (st.top() < 10) printf("%d", st.top());
        else printf("%c", st.top() + 'A' - 10);
        st.pop();
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 12596
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1360 kb
****************************************************************/