#include <iostream>
#include <stack>

using namespace std;

int trans(char c) {
    if (c == '(' || c == ')') return 1;
    else if (c == '[' || c == ']') return 2;
    else if (c == '{' || c == '}') return 3;
    else if (c == '<' || c == '>') return 4;
    return 0;
}

bool check(string s) {
    stack<int> st;
    for (auto i : s) {
        if (i == ')' || i == ']' || i == '>' || i == '}') {
            if (st.empty() || st.top() != trans(i)) {
                return false;
            }
            st.pop();
        }
        else st.push(trans(i));
    }
    if (!st.empty()) return false;
    return true;
}

int main() {
    int n;
    string s;
    cin >> n;
    while (n--) {
        cin >> s;
        if (check(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 18772
	Language: C++
	Result: 正确
	Time:3 ms
	Memory:2224 kb
****************************************************************/
