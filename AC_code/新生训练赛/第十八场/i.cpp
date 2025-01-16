#include <iostream>
#include <stack>

using namespace std;

stack<char> st;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    int t = 0;
    cin >> s;
    for (auto i : s) {
        if (!st.empty() && st.top() != i) {
            t++;
            st.pop();
        } 
        else {
            st.push(i);
        }
    }
    cout << t * 2 << endl;
    return 0;
}