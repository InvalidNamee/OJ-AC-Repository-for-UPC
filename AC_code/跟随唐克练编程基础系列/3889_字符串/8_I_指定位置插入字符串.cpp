#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s, t;
    bool flag = true;
    char k;
    cin >> s >> t >> k;
    for (auto i : s) {
        if (i == k && flag) cout << t << i, flag = false;
        else cout << i;
    }
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 9874
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
