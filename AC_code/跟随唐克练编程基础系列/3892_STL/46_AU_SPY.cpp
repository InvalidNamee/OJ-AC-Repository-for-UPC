#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

unordered_set<string> ss;
vector<string> vec;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int a, b, c;
    while (cin >> a >> b >> c) {
        ss.clear();
        vec.clear();
        string s;
        for (int i = 0; i < a; ++i) cin >> s, vec.push_back(s);
        for (int i = 0; i < b; ++i) cin >> s, ss.insert(s);
        for (int i = 0; i < c; ++i) {
            cin >> s;
            if (ss.find(s) != ss.end()) ss.erase(ss.find(s));
        }
        if (ss.size()) {
            for (int i = 0; i < a; ++i) {
                if (ss.find(vec[i]) != ss.end()) cout << vec[i] << ' ';
            }
            cout << endl;
        }
        else {
            cout << "No enemy spy" << endl;
        }
    }
    return 0;
}
/**************************************************************
	Problem: 4421
	Language: C++
	Result: 正确
	Time:0 ms
	Memory:2392 kb
****************************************************************/
