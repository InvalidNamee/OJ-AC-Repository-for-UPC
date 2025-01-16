#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Node {
    string a;
    int b, c;
    bool o;
} a[100];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i].a >> a[i].b;
        a[i].c = i;
        if (a[i].b >= 60) a[i].o = true;
    }
    sort(a, a + n, [](Node a, Node b) {
        if (a.o != b.o) return a.o > b.o;
        else if (a.o) return a.b == b.b ? a.c < b.c : a.b > b.b;
        else return a.c < b.c;
    });
    for (int i = 0; i < n; ++i) {
        cout << a[i].a << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 14276
	Language: C++
	Result: 正确
	Time:13 ms
	Memory:2400 kb
****************************************************************/