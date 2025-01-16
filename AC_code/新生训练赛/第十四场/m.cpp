#include <cstdio>
#include <algorithm>

using namespace std;

struct Node {
    int pr, age, num, t;

    bool operator <(const Node &b) {
        if (pr != b.pr) return pr < b.pr;
        else if (pr == 0) return age == b.age ? t < b.t : age < b.age;
        else if (pr == 1) return age == b.age ? t < b.t : age > b.age;
        else return t < b.t;
    }
} a[30000];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d%d", &a[i].num, &a[i].age);
        if (a[i].age <= 6) a[i].pr = 0;
        else if (a[i].age >= 60) a[i].pr = 1;
        else a[i].pr = 2;
        a[i].t = i;
    }
    sort(a, a + n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", a[i].num);
    }
    return 0;
}