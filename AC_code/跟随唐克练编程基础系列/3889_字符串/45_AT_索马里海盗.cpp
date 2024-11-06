#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    string s;
    cin.get();
    while (n--) {
        getline(cin, s);
        for (auto i : s) {
            if (isdigit(i)) continue;
            else cout << i;
        }
        cout << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 3104
	Language: C++
	Result: 正确
	Time:2 ms
	Memory:2384 kb
****************************************************************/
