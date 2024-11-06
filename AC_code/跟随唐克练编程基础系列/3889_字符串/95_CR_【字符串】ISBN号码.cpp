#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    int res = 0;
    for (int i = 0, t = 1; t <= 9; ++i) {
        if (isdigit(s[i])) res += (s[i] - 48) * t++;
    }
    res %= 11;
    if (res == 10) {
        if (s.back() == 'X') cout << "Right" << endl;
        else {
            s.pop_back();
            cout << s << 'X' << endl;
        } 
    }
    else {
        if (s.back() == res + 48) cout << "Right" << endl;
        else {
            s.pop_back();
            cout << s << (char)(res + 48) << endl;
        }
    }
    return 0;
}

/**************************************************************
	Problem: 3474
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:2384 kb
****************************************************************/
