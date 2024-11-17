#include <iostream>
#include <unordered_set>

using namespace std;

unordered_set<string> st;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string s, t;
    cin >> s;
    st.insert(s);
    for (int i = 1; i < n; ++i) {
        cin >> t;
        if (s.back() != t.front() || st.find(t) != st.end()) {
            cout << "No" << endl;
            return 0;
        }
        st.insert(t);
        s = t;
    }
    cout << "Yes" << endl;
    return 0;
}