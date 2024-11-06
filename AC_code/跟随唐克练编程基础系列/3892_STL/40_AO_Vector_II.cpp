#include <cstdio>
#include <vector>

using namespace std;

vector<int> vec[1000];

int main() {
    int n, q;
    scanf("%d%d", &n, &q);
    while (q--) {
        int op;
        scanf("%d", &op);
        if (op == 0) {
            int t, x;
            scanf("%d%d", &t, &x);
            vec[t].push_back(x);
        }
        else if (op == 1) {
            int t;
            scanf("%d", &t);
            for (auto i : vec[t]) printf("%d ", i);
            printf("\n");
        }
        else {
            int t;
            scanf("%d", &t);
            vec[t].clear();
        }
    }
    return 0;
}
/**************************************************************
	Problem: 9478
	Language: C++
	Result: 正确
	Time:200 ms
	Memory:4640 kb
****************************************************************/
