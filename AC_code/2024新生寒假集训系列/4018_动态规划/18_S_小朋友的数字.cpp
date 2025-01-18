/**
 * 特征值：最大子段和
 * 分数：第一个（特征值），其他（max前面的(分数+最大子段和)）
 */
#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int a[1000010];
__int128_t fenshu[1000010], tezhengzhi[1000010];

int main() {
    int n, p;
    __int128_t s = 0, mn = 0;
    scanf("%d%d", &n, &p);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        s += a[i];
        if (i == 1) tezhengzhi[i] = a[i];
        else tezhengzhi[i] = max(tezhengzhi[i - 1], s - mn);
        mn = min(mn, s);
        if (i == 1) fenshu[i] = tezhengzhi[i];
        else if (i == 2) fenshu[i] = fenshu[i - 1] + tezhengzhi[i - 1];
        else fenshu[i] = max(fenshu[i - 1], fenshu[i - 1] + tezhengzhi[i - 1]);
    }
    __int128_t res = max(fenshu[n], fenshu[1]);
    printf("%d\n", (int)(res > 0 ? res % p : -(-res) % p));
    return 0;
}
/**************************************************************
	Problem: 1722
	Language: C++
	Result: 正确
	Time:169 ms
	Memory:37376 kb
****************************************************************/