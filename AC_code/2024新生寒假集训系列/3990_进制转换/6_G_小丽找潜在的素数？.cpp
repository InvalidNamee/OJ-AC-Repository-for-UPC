#include <iostream>
#include <cmath>

using namespace std;

int trans(string s) {
    int res = 0;
    for (auto i : s) {
        res = res * 2 + i - '0';
    }
    return res;
}

bool prime(int n) {
    if (n < 2) return false;
    int l = sqrt(n);
    for (int i = 2; i <= l; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    
    string s;
    int cnt = 0;
    while (n--) {
        cin >> s;
        if (prime(trans(s))) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
/**************************************************************
	Problem: 23827
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/