#include <iostream>
#include <algorithm>

using namespace std;

struct Node
{
    int id, a, b, c, s;
    string name;
} a[100];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i].id >> a[i].name >> a[i].a >> a[i].b >> a[i].c;
        a[i].s = a[i].a + a[i].b + a[i].c;
    }
    sort(a, a + n, [](Node a, Node b) {
        return a.s > b.s;
    });
    for (int i = 0; i < 3; ++i) {
        cout << a[i].id << ' ' << a[i].name << ' ' << a[i].a << ' '  << a[i].b << ' ' << a[i].c << ' ' << a[i].s << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 2059
	Language: C++
	Result: 正确
	Time:0 ms
	Memory:2400 kb
****************************************************************/
