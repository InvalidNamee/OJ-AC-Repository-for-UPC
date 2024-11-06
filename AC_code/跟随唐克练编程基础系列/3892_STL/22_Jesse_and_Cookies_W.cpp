#include <iostream>
#include <queue>

using namespace std;

typedef long long ll;

priority_queue<ll, vector<ll>, greater<ll>> q;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        q.push(t);
    }
    int cnt = 0;
    while (q.size() != 1 && q.top() < k) {
        ll tmp = 0;
        tmp += q.top();
        q.pop();
        tmp += q.top() << 1;
        q.pop();
        q.push(tmp);
        cnt++;
    }
    if (q.top() >= k)
        cout << cnt << endl;
    else
        cout << -1 << endl;
    return 0;
}
/**************************************************************
	Problem: 20345
	Language: C++
	Result: 正确
	Time:181 ms
	Memory:8568 kb
****************************************************************/
