#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    cin.ignore();
    while (n--) {
        string s, t;
        getline(cin, s);
        for (auto i : s) {
            if (i == ' ') {
                for (int j = t.length() - 1; j >= 0; --j) cout << t[j];
                cout << ' ';
                t = "";
            }
            else t += i;
        }
        
        for (int j = t.length() - 1; j >= 0; --j) cout << t[j];
        cout << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 20343
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
