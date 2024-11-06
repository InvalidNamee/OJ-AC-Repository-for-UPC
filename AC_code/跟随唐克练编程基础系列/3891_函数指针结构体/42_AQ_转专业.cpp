#include <iostream>
#include <algorithm>

using namespace std;

struct Node
{
    int a, b, c;
    string name;
} a[100];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    n++;
    for (int i = 0; i < n; ++i) {
        cin >> a[i].name >> a[i].a >> a[i].b >> a[i].c;
    }
    sort(a, a + n, [](Node a, Node b) {
        return a.c < b.c;
    });
    for (int i = 0; i < n; ++i) {
        cout << a[i].name << ' ' << a[i].a << ' '  << a[i].b << ' ' << a[i].c << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 2063
	Language: C++
	Result: 正确
	Time:0 ms
	Memory:2400 kb
****************************************************************/
