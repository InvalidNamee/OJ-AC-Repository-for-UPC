#include <iostream>
#define pswd "HELLO@UPC"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    char c;
    string s;
    while (cin >> c, c == 'Y') {
        cin >> s;
        if (s == pswd) {
            cout << "Success" << endl;
            break;
        }
        else cout << "Sorry" << endl;
    }
    
    return 0;
}
/**************************************************************
	Problem: 5069
	Language: C++
	Result: 正确
	Time:16 ms
	Memory:2384 kb
****************************************************************/
