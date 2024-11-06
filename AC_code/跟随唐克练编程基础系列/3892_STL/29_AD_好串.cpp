#include <iostream>

using namespace std;

int main() {
    string s;
    int l = 0;
    cin >> s;
    for (auto i : s) {
        if (i == 'a') l++;
        else {
            if (!l) {
                printf("Bad\n");
                return 0;
            }
            l--;
        }
    }
    if (l) printf("Bad\n");
    else printf("Good\n");
    return 0;
}
/**************************************************************
	Problem: 21339
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2224 kb
****************************************************************/
