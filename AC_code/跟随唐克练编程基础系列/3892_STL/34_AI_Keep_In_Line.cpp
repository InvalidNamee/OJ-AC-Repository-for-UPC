#include <iostream>
#include <map>
#include <queue>

using namespace std;

map<string, bool> mp;
queue<string> q;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T;
    cin >> T;
    while (T--) {
        mp.clear();
        int t, res = 0;
        cin >> t;
        while (t--) {
            string op, s;
            cin >> op >> s;
            if (op == "in") {
                q.push(s);
                mp[s] = true;
            }
            else {
                while (!q.empty() && !mp[q.front()]) q.pop();
                if (!q.empty() && q.front() == s) q.pop(), res++;
                else mp[s] = false;
            }
        }
        while (!q.empty()) q.pop();
        cout << res << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 21343
	Language: C++
	Result: 正确
	Time:209 ms
	Memory:10064 kb
****************************************************************/
