#include <set>
#include <cstdio>

using namespace std;

set<pair<int, int>> s;

int main() {
    int op;
    while (scanf("%d", &op), op) {
        if (op == 1) {
            int k, p;
            scanf("%d%d", &k, &p);
            s.insert({p, k});
        }
        else if (s.empty()) {
            printf("0\n");
        }
        else if (op == 2) {
            auto it = --s.end();
            printf("%d\n", it->second);
            s.erase(it);
        }
        else {
            auto it = s.begin();
            printf("%d\n", it->second);
            s.erase(it);
        }
    }
    return 0;
}
/**************************************************************
	Problem: 21432
	Language: C++
	Result: 正确
	Time:53 ms
	Memory:1304 kb
****************************************************************/
