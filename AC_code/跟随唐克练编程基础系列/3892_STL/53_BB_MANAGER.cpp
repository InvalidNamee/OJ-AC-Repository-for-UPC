#include <set>
#include <cstdio>
#include <cstring>

using namespace std;

bool mark[10010];
multiset<int> st;

int main() {
    int n, t;
    bool flag = false;
    while (scanf("%d%d", &n, &t) != EOF) {
        if (flag) printf("\n");
        else flag = true;
        memset(mark, 0, sizeof(mark));
        st.clear();
        for (int i = 1; i <= t; ++i) {
            int tmp;
            scanf("%d", &tmp);
            mark[tmp] = true;
        }
        char s[2];
        int t = 0, p = 1;
        while (scanf("%s", s), s[0] != 'e') {
            if (s[0] == 'a') {
                int x;
                scanf("%d", &x);
                st.insert(x);
            }
            else if (s[0] == 'r') {
                if (st.empty()) {
                    printf("-1\n");
                    continue;
                }
                set<int>::iterator it;
                if (p == 1) it = st.begin();
                else it = --st.end();
                if (mark[++t]) printf("%d\n", *it);
                st.erase(it);
            }
            else {
                scanf("%d", &p);
            }
        }
    }
    return 0;
}
/**************************************************************
	Problem: 21431
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1316 kb
****************************************************************/
