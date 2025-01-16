#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int t;
        scanf("%d", &t);
        double t1 = (double)t / 3 + 50, t2 = (double)t / 1.2;
        if (t1 == t2) printf("All\n");
        else if (t1 < t2) printf("Bike\n");
        else printf("Walk\n");
    }
    return 0;
}