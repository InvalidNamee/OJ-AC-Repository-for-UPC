#include <iostream>
#include <unordered_set>

using namespace std;

unordered_set<string> s;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    string str;
    cin >> n;
    while (n--) {
        cin >> str;
        s.insert(str);
        if (str == "younik") {
            cout << s.size();
            return 0;
        }
    }
    return 0;
}
/**************************************************************
	Problem: 21346
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:2388 kb
****************************************************************/
