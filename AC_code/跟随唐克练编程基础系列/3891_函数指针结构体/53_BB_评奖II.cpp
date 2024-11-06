#include <iostream>
  
using namespace std;
  
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, mx = -__INT_MAX__, mxt = -__INT_MAX__, mnt = __INT_MAX__;
    string name;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string str;
        cin >> str;
        int s = 0;
        for (int j = 0; j < 4; ++j) {
            int t;
            cin >> t;
            mxt = max(mxt, t);
            mnt = min(mnt, t);
            s += t;
        }
        if (mx < s) mx = s, name = str;
        cout << s << endl;
    }
    cout << name << endl;
    cout << mxt << ' ' << mnt << endl; 
    return 0;
}
/**************************************************************
	Problem: 10375
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
