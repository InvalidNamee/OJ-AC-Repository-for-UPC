#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    long long res = 1;
    cin >> n;
    for (int i = 1; i < n; ++i) {
        res = res + i;
    }
    cout << res * 2 << endl;
    return 0;
}

/*
2 4 8 14
1 2 4 7 
1 1 2 3
*/
/**************************************************************
	Problem: 23811
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2380 kb
****************************************************************/