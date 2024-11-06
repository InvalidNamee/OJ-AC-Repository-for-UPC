#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

struct Node
{
    int id, a, b, c, s;
    string name;
} a[100];

vector<Node> ans;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i].id >> a[i].name >> a[i].a >> a[i].b >> a[i].c;
        a[i].s = a[i].a + a[i].b + a[i].c;
        if (ans.empty()) ans.push_back(a[i]);
        else if (ans.back().s > a[i].s) continue;
        else if (ans.back().s == a[i].s) ans.push_back(a[i]);
        else ans.clear(), ans.push_back(a[i]);
    }
    for (auto i : ans) {
        cout << setw(4) << setfill('0') << i.id << ' ' << i.name << ' ' << i.a + i.b + i.c << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 2670
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2392 kb
****************************************************************/
