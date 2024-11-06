#include <iostream>
#include <queue>

using namespace std;

typedef long long ll;

priority_queue<ll, vector<ll>, greater<ll>> q;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        q.push(t);
    }
    ll v = 0;
    while (q.size() != 1) {
        ll tmp = 0;
        tmp += q.top();
        q.pop();
        tmp += q.top();
        q.pop();
        q.push(tmp);
        v += tmp;
    }
    cout << v << endl;
    return 0;
}
/**************************************************************
	Problem: 2813
	Language: C++
	Result: 正确
	Time:5 ms
	Memory:2540 kb
****************************************************************/
