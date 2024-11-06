#include <iostream>

using namespace std;

string a[] = {"rat", "ox", "tiger", "rabbit", "dragon", "snake", "horse", "sheep", "monkey", "rooster", "dog", "pig"};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    cout << a[((n - 1900) % 12 + 12) % 12] << endl;    
    return 0;
}
/**************************************************************
	Problem: 22643
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2380 kb
****************************************************************/
