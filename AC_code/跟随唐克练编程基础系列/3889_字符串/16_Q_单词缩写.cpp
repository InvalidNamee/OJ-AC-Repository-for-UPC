#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    cin.get();
    while (n--) {
        string s;
        getline(cin, s);
        char h = s[0];
        int lsh = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == ' ') {
                if (i - lsh >= 3) {
                    string t = s.substr(lsh, i - lsh);
                    // cout << t << endl;
                    if (!(t == "and" || t == "for" || t == "the" || t == "And" || t == "For" || t == "The")) cout << (char)toupper(h);
                }
                lsh = i + 1;
                h = s[i + 1];
            }
        }
        if (s.length() - lsh >= 3) {
            string t = s.substr(lsh, s.length() - lsh);
            if (!(t == "and" || t == "for" || t == "the" || t == "And" || t == "For" || t == "The")) cout << (char)toupper(h);                    
        }
        cout << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 9882
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
