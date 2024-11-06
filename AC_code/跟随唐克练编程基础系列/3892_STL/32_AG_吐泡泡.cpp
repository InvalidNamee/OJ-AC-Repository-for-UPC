#include <iostream>
#include <string>

using namespace std;

void processBubbles(string& s) {
    for (size_t i = 0; i < s.size(); ) {
        if (s[i] == 'o' && i + 1 < s.size() && s[i + 1] == 'o') {
            // Merge two 'o' into 'O'
            s.replace(i, 2, "O");
            i = max(0, (int)i - 1); // Move one step back to check new adjacent bubbles
        } else if (s[i] == 'O' && i + 1 < s.size() && s[i + 1] == 'O') {
            // Remove two 'O'
            s.erase(i, 2);
            i = max(0, (int)i - 1); // Move one step back to check new adjacent bubbles
        } else {
            i++;
        }
    }
}

int main() {
    string s;
    while (cin >> s) {
        processBubbles(s);
        cout << s << endl;
    }
    return 0;
}

/**************************************************************
	Problem: 21341
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2224 kb
****************************************************************/
