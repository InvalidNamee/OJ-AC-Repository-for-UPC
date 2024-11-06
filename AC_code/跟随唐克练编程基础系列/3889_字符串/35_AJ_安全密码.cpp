#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    cin.ignore();
    while (n--) {
        bool a[] = {false, false, false, false};
        string s;
        getline(cin, s);
        // cout << s << endl;
        if (s.length() < 6) {
            cout << "Not Safe" << endl;
            continue;
        }
        for (auto i : s) {
            if (isdigit(i)) a[0] = true;
            else if (isupper(i)) a[1] = true;
            else if (islower(i)) a[2] = true;
            else a[3] = true;
        }
        int t = a[0] + a[1] + a[2] + a[3];
        if (t == 1) cout << "Not Safe" << endl;
        else if (t == 2) cout << "Medium Safe" << endl;
        else cout << "Safe" << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 9861
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
