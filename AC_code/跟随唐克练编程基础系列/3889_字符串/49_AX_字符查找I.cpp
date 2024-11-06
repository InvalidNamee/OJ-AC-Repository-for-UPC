#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    char c;
    cin >> s >> c;
    int t = s.find(c);
    if (t == EOF) cout << EOF << endl;
    else cout << t + 1 << endl;
    return 0;
}
/**************************************************************
	Problem: 11102
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
