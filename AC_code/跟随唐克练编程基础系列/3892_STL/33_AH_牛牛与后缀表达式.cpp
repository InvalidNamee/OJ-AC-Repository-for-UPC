#include <cstdio>
#include <iostream>
#include <stack>

using namespace std;

typedef long long ll;

stack<ll> st;

int main() {
    ll fig = 0;
    char c;
    while (c = getchar(), c != EOF) {
        if (isdigit(c)) fig = fig * 10 + c - 48;
        else if (c == '#') st.push(fig), fig = 0;
        else if (c == '+') {
            ll res = st.top();
            st.pop();
            res += st.top();
            st.pop();
            st.push(res);
        }
        else if (c == '-') {
            ll res = st.top();
            st.pop();
            res -= st.top();
            st.pop();
            st.push(-res);
        }
        else if (c == '*') {
            ll res = st.top();
            st.pop();
            res *= st.top();
            st.pop();
            st.push(res);
        }
    }
    printf("%lld\n", st.top());
    return 0;
}
/**************************************************************
	Problem: 21342
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2224 kb
****************************************************************/
