#include <cstdio>
#include <queue>

using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int>> q;
    int n;
    scanf("%d", &n);
    while (n--) {
        char s[2];
        scanf("%s", s);
        if (s[0] == 'i') {
            int x;
            scanf("%d", &x);
            q.push(x);
        }
        else {
            printf("%d\n", q.top());
            q.pop();
        }
    }
    return 0;
}
/**************************************************************
	Problem: 8718
	Language: C++
	Result: 正确
	Time:3 ms
	Memory:1504 kb
****************************************************************/
