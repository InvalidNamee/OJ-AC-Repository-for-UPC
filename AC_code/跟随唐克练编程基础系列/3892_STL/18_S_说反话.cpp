#include <iostream>
#include <stack>

using namespace std;

stack<string> st;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    while (cin >> s) {
        st.push(s);
    }
    while (!st.empty()) {
        cout << st.top() << ' ';
        st.pop();
    }
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 3571
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
