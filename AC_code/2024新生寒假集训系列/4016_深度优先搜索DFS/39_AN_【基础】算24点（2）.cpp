#include <cstdio>
#include <sstream>
#include <stack>

using namespace std;

int a[10], op[10];
char mp[] = {'+', '-', '*'};

int eval(stringstream &cin) {
    int t;
    char op;
    cin >> t;
    stack<int> num;
    stack<char> o;
    num.push(t);
    while (cin >> op >> t) {
        if (op == '*') {
            int tp = num.top();
            num.pop();
            num.push(tp * t);
        }
        else {
            num.push(t);
            o.push(op);
        }
    }
    while (!o.empty()) {
        int a, b;
        b = num.top();
        num.pop();
        a = num.top();
        num.pop();
        char op = o.top();
        o.pop();
        if (op == '+') num.push(a + b);
        else num.push(a - b);
    }
    return num.top();
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    int lim = 1;
    for (int i = 1; i < n; ++i) {
        lim *= 3;
    }
    int cnt = 0;
    for (int i = 0; i < lim; ++i) {
        stringstream eq;
        int t = i;
        eq << a[1] << ' ';
        for (int j = 0; j < n - 1; ++j) {
            eq << mp[t % 3] << ' ' << a[2 + j];
            t /= 3;
        }
        if (eval(eq) == 24) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
/**************************************************************
	Problem: 23878
	Language: C++
	Result: 正确
	Time:15 ms
	Memory:2192 kb
****************************************************************/