#include <iostream>

using namespace std;

int calc(int n, int p) {
    int s = 0;
    while (n) {
        s += n % p;
        n /= p;
    }
    return s;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    int a = calc(n, 10), b = calc(n, 12), c = calc(n, 16);
    cout << c << endl;
    if (a == b && b == c) cout << "Right" << endl;
    else cout << "Wrong" << endl;
    return 0;
}
/**************************************************************
	Problem: 22640
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2380 kb
****************************************************************/
