#include <vector>
#include <cstdio>

using namespace std;

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        vector<int> q;
        int n;
        scanf("%d", &n);
        for (int i = 1; i <= n; ++i) {
            q.push_back(i);
        }
        while (q.size() > 3) {
            auto it = q.begin() + 1;
            while (it < q.end()) {
                it = q.erase(it);
                it++;
            }
            if (q.size() <= 3) break;
            it = q.begin() + 2;
            while (it < q.end()) {
                it = q.erase(it);
                it += 2;
            }
        }
        for (auto i : q) printf("%d ", i);
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 21428
	Language: C++
	Result: 正确
	Time:5 ms
	Memory:1504 kb
****************************************************************/
