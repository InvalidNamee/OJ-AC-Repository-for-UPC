#include <iostream>
#include <cstring>

using namespace std;

int w[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
char check[] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    int t = 0;
    for (int i = 0; i < 17; ++i) {
        t += (s[i] - 48) * w[i];
    }
    t %= 11;
    if (check[t] == s[17]) cout << "Valid" << endl;
    else cout << "Invalid" << endl;
    return 0;
}
/**************************************************************
	Problem: 9863
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
