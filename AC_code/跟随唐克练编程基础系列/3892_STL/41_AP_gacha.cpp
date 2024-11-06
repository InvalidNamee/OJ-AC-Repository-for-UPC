#include <iostream>
#include <unordered_set>

using namespace std;

unordered_set<string> h;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        h.insert(s);
    }
    cout << h.size() << endl;
    return 0;
}
/**************************************************************
	Problem: 15638
	Language: C++
	Result: 正确
	Time:186 ms
	Memory:17616 kb
****************************************************************/
