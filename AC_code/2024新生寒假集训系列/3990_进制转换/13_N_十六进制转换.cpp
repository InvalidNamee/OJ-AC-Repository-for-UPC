#include <iostream>

using namespace std;

bool flag = true;

void trans(string s) {
    int n = 0;
    for (char i : s) {
        int t;
        if (isdigit(i)) t = i - 48;
        else t = i - 'A' + 10;
        n = n * 16 + t;
    }
    for (int i = 3; i >= 0; --i) {
        int t = n >> (i * 3) & 7;
        if (t) {
            cout << t;
            flag = false;
        }
        else if (!flag) cout << t;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    if (s.length() % 3) trans(s.substr(0, s.length() % 3));
    for (int i = s.length() % 3; i <= s.length() - 3; i += 3) {
        trans(s.substr(i, 3));
    } 
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 23834
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/