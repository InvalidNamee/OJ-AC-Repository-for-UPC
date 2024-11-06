#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'O') s[i] = '0';
        else if (s[i] == 'l') s[i] = '1';
        else if (s[i] == 'Z') s[i] = '2';
        else if (s[i] == 'S') s[i] = '5';
        else if (s[i] == 'b') s[i] = '6';
        else if (s[i] == 'B') s[i] = '8';
        else if (s[i] == 'q') s[i] = '9'; 
    }
    cout << s << endl;
    return 0;
}
/**************************************************************
	Problem: 22623
	Language: C++
	Result: 正确
	Time:11 ms
	Memory:2384 kb
****************************************************************/
