#include <bitset>
#include <iostream>
#include <stack>
 
using namespace std;
 
int main() {
    stack<int> st;
    int n;
    cin >> n;
    if (!n) {
        cout << 0 << endl;
        return 0;
    }
    while (n) {
        st.push(n % 2);
        n /= 2;
    }
    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 23819
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/