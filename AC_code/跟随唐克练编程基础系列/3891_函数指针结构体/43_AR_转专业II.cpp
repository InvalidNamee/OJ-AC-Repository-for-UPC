#include <iostream>
#include <algorithm>

using namespace std;

struct Node
{
    int a, b;
    string name;
} a[10];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i].name >> a[i].a >> a[i].b;
    }
    sort(a, a + n, [](Node a, Node b) {
        return a.b - a.a > b.b - b.a;
    });
    cout << a[0].name << ' ' << a[0].b - a[0].a << endl;
    return 0;
}
/**************************************************************
	Problem: 2070
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2392 kb
****************************************************************/
