#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

struct Node
{
    int a, b, c, s;
    string name;
} a[10];

Node ans;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    ans.s = -1;
    for (int i = 0; i < n; ++i) {
        cin >> a[i].name >> a[i].a >> a[i].b >> a[i].c;
        a[i].s = a[i].a + a[i].b + a[i].c;
        if (a[i].s > ans.s) ans = a[i];
    }
    cout << ans.name << ' ' << ans.a << ' ' << ans.b << ' ' << ans.c << ' ' << ans.s << endl; 
    return 0;
}
/**************************************************************
	Problem: 3386
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
