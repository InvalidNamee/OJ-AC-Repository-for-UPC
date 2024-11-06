#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double p = (a + b + c) / 2;
    cout << "area=" << fixed << setprecision(2) << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
    return 0;
}
/**************************************************************
	Problem: 23378
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
