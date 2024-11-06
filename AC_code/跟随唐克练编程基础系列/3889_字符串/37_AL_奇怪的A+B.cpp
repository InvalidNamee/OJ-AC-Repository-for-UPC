#include <iostream>
#include <map>

using namespace std;

int trans(string t) {
    if (t == "zero") return 0;
    else if (t == "one") return 1;
    else if (t == "two") return 2;
    else if (t == "three") return 3;
    else if (t == "four") return 4;
    else if (t == "five") return 5;
    else if (t == "six") return 6;
    else if (t == "seven") return 7;
    else if (t == "eight") return 8;
    else if (t == "nine") return 9;
    else return -1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s;
        int a = 0, b = 0;
        while (cin >> s, s != "+") {
            a = a * 10 + trans(s);
        }
        while (cin >> s, s != "=") {
            b = b * 10 + trans(s);
        }
        cout << a + b << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 9859
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
