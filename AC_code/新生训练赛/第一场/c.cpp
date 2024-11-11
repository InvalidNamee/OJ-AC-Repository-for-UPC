#include <cstdio>

int main() {
    double t;
    scanf("%lf", &t);
    if (t < 15.0) printf("cold\n");
    else if (t > 25.0) printf("hot\n");
    else printf("home\n");
    return 0;
}