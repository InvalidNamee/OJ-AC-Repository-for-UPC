#include <iostream>
#include <algorithm>

using namespace std;

struct Node {
    string a, b;
    int c, d;

    friend istream &operator >>(istream &cin, Node &_) {
        cin >> _.a >> _.b >> _.c >> _.d;
        return cin;
    }

    friend ostream &operator <<(ostream &cout, Node &_) {
        cout << _.a << ' ' << _.b << ' ' << _.c << ' ' << _.d;
        return cout;
    }

    bool operator <(const Node &_) {
        return c == _.c ? d < _.d : c < _.c;
    }
} a[110];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = n - 1; i >= 0; --i) {
        cout << a[i] << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 11556
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2244 kb
****************************************************************/
