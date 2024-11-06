#include <iostream>
#include <cmath>

using namespace std;

bool PrimeJudge(int n) {
    if (n < 2) return false;
    int l = sqrt(n);
    for (int i = 2; i <= l; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int ans = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length() - 1; ++i) {
        int t = stoi(s.substr(i, 2));
        if (PrimeJudge(t)) ans = max(ans, t);
    }
    cout << ans << endl;
    return 0;
}
/**************************************************************
	Problem: 5231
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2224 kb
****************************************************************/
