#include <cstdio>
#include <deque>

using namespace std;

deque<int> que;

int main() {
    int q;
    scanf("%d", &q);
    while (q--) {
        int op;
        scanf("%d", &op);
        if (op == 0) {
            int d, x;
            scanf("%d%d", &d, &x);
            if (d) que.push_back(x);
            else que.push_front(x);
        }
        else if (op == 1) {
            int p;
            scanf("%d", &p);
            printf("%d\n", que[p]);
        }
        else {
            int d;
            scanf("%d", &d);
            if (d) que.pop_back();
            else que.pop_front();
        }
    }
    return 0;
}
/**************************************************************
	Problem: 9476
	Language: C++
	Result: 正确
	Time:114 ms
	Memory:3080 kb
****************************************************************/
