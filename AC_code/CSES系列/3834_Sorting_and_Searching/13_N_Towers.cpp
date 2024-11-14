#include <cstdio>
#include <set>

using namespace std;

multiset<int> s;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int w;
        scanf("%d", &w);
        if (s.empty()) s.insert(w);
        else {
            auto it = s.upper_bound(w);
            if (it != s.end()) s.erase(it);
            s.insert(w);
        }
    }
    printf("%ld\n", s.size());
    return 0;
}
/**************************************************************
	Problem: 23023
	Language: C++
	Result: 正确
	Time:1821 ms
	Memory:11316 kb
****************************************************************/
