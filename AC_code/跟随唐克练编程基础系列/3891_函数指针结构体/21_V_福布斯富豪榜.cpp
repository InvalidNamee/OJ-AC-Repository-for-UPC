/*只需要提交Fun函数即可*/
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    pair<int, string> mx = {0, ""};
    int n;
    cin >> n;
    while (n--) {
        int a = 0;
        string s;
        cin >> s >> a;
        mx = max(mx, {a, s});
    }
    cout << mx.second << ' ' << mx.first << endl;
    return 0;
}
/**************************************************************
	Problem: 5229
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2224 kb
****************************************************************/
