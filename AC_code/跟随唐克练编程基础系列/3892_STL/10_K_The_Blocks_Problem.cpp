#include <iostream>
#include <stack>

using namespace std;

struct Stack {
    int a[25], l;

    void push(int x) {
        a[l++] = x;
    }

    int top() {
        return a[l - 1];
    }

    void pop() {
        l--;
    }

    bool empty() {
        return l == 0;
    }
} st[25];
int p[25];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        st[i].push(i);
        p[i] = i;
    }
    string s1, s2;
    int x, y;
    while (cin >> s1, s1 != "quit") {
        cin >> x >> s2 >> y;
        if (p[x] == p[y]) continue;
        else if (s1 == "move" && s2 == "onto") {
            while (st[p[x]].top() != x) {
                p[st[p[x]].top()] = st[p[x]].top();
                st[st[p[x]].top()].push(st[p[x]].top());
                st[p[x]].pop();
            }
            while (st[p[y]].top() != y) {
                p[st[p[y]].top()] = st[p[y]].top();
                st[st[p[y]].top()].push(st[p[y]].top());
                st[p[y]].pop();
            }
            st[p[y]].push(x);
            st[p[x]].pop();
            p[x] = p[y];
        }
        else if (s1 == "move" && s2 == "over") {
            while (st[p[x]].top() != x) {
                p[st[p[x]].top()] = st[p[x]].top();
                st[st[p[x]].top()].push(st[p[x]].top());
                st[p[x]].pop();
            }
            st[p[y]].push(x);
            st[p[x]].pop();
            p[x] = p[y];
        }
        else if (s1 == "pile" && s2 == "onto") {
            while (st[p[y]].top() != y) {
                p[st[p[y]].top()] = st[p[y]].top();
                st[st[p[y]].top()].push(st[p[y]].top());
                st[p[y]].pop();
            }
            stack<int> tmp;
            while (st[p[x]].top() != x) {
                p[st[p[x]].top()] = p[y];
                tmp.push(st[p[x]].top());
                st[p[x]].pop();
            }
            tmp.push(x);
            st[p[x]].pop();
            p[x] = p[y];
            while (!tmp.empty()) {
                st[p[y]].push(tmp.top());
                tmp.pop();
            }
        }
        else {
            stack<int> tmp;
            while (st[p[x]].top() != x) {
                p[st[p[x]].top()] = p[y];
                tmp.push(st[p[x]].top());
                st[p[x]].pop();
            }
            tmp.push(x);
            st[p[x]].pop();
            p[x] = p[y];
            while (!tmp.empty()) {
                st[p[y]].push(tmp.top());
                tmp.pop();
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << i << ':' << ' ';
        for (int j = 0; j < st[i].l; ++j) cout << st[i].a[j] << ' ';
        cout << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 18339
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2392 kb
****************************************************************/
