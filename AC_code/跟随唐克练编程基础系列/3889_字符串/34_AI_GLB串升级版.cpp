#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    while (n--) {
        bool a[] = {false, false, false};
        string s;
        cin >> s;
        for (auto i : s) {
            if (i == 'G' || i == 'g') a[0] = true;
            else if (i == 'L' || i == 'l') a[1] = true;
            else if (i == 'B' || i == 'b') a[2] = true;
        }
        if (a[0] & a[1] & a[2]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 9862
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
