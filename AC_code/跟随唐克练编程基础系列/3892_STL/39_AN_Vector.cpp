#include <cstdio>
#include <vector>

using namespace std;

int main() {
    vector<int> vec;
    int q;
    scanf("%d", &q);
    while (q--) {
        int op;
        scanf("%d", &op);
        if (op == 0) {
            int t;
            scanf("%d", &t);
            vec.push_back(t);
        }
        else if (op == 1) {
            int t;
            scanf("%d", &t);
            printf("%d\n", vec[t]);
        }
        else {
            vec.pop_back();
        }
    }
    return 0;
}
/**************************************************************
	Problem: 9475
	Language: C++
	Result: 正确
	Time:57 ms
	Memory:2980 kb
****************************************************************/
