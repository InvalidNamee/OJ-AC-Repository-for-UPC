#include <cstdio>
#include <unordered_set>

using namespace std;

unordered_set<int> s;

int main() {
    int cur, pre = 0;
    scanf("%d", &cur);
    int i = 1;
    s.insert(cur);
    while (true) {
        i++;
        cur = (cur & 1) ? (3 * cur + 1) : (cur / 2);
        if (s.find(cur) != s.end()) {
            printf("%d\n", i);
            break;
        }
        s.insert(cur);
        pre = cur;
    }
    return 0;
}