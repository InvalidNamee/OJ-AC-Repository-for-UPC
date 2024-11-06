#include <cstdio>
#include <cstring>

int Gcd(int n, int m) {
    return m ? Gcd(m, n % m) : n;
}

int main() {
    int a, b, c, d;
    char op;
    scanf("%d/%d%c%d/%d", &a, &b, &op, &c, &d);
    printf("%d/%d%c%d/%d=", a, b, op, c, d);
    if (op == '+') {
        int t = b * d / Gcd(b, d);
        a *= t / b;
        c *= t / d;
        int e = a + c;
        int f = Gcd(e, t);
        if (t / f == 1) printf("%d\n", e / f);
        else printf("%d/%d\n", e / f, t / f);
    }
    else if (op == '-') {
        int t = b * d / Gcd(b, d);
        a *= t / b;
        c *= t / d;
        int e = a - c;
        int f = Gcd(e, t);
        if (t / f == 1) printf("%d\n", e / f);
        else printf("%d/%d\n", e / f, t / f);
    }
    else if (op == '*') {
        a *= c, b *= d;
        int t = Gcd(a, b);
        if (b / t == 1) printf("%d\n", a / t);
        else printf("%d/%d\n", a / t, b / t);
    }
    else if (op == '/') {
        a *= d, b *= c;
        int t = Gcd(a, b);
        if (b / t == 1) printf("%d\n", a / t);
        else printf("%d/%d\n", a / t, b / t);
    }
    return 0;
}
/**************************************************************
	Problem: 10038
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
