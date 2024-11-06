#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    double s = 0;
    cin >> n;
    while (n--) {
        double x;
        string u;
        cin >> x >> u;
        if (u == "JPY") {
            s += x;
        }
        else {
            s += x * 380000.0;
        }
    }
    cout << fixed << s << endl;
    return 0;
}
/**************************************************************
	Problem: 12067
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
