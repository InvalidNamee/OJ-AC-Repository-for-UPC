#include <iostream>

using namespace std;

string a[] = {"Rat", "Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Ram", "Monkey", "Rooster", "Dog", "Pig"};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    cout << a[((2017 - n + 1 - 1900) % 12 + 12) % 12] << endl;    
    return 0;
}
/**************************************************************
	Problem: 13024
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2380 kb
****************************************************************/
