#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    string s;
    bool flag = true;
    cin >> n >> s;
    while (n--) {
        string t;
        cin >> t;
        if (t.find(s) != -1) cout << t << endl, flag = false; 
    }
    if (flag) cout << "Can not find" << endl;
    return 0;
}
/**************************************************************
	Problem: 3280
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:2384 kb
****************************************************************/
