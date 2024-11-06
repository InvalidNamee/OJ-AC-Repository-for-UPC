#include <cstdio>
#include <map>

using namespace std;

map<int, bool> mp;
bool mark[8000];

void init() {
    for (int i = 2; i <= 7500; ++i) {
        if (mark[i]) continue;
        for (int j = 2; i * j <= 7500; ++j) {
            mark[i * j] = true;
        }
    }
}

int main() {
    init();
    int n;
    scanf("%d", &n);
    for (int i = 2; i * i < n; ++i) {
        if (mark[i]) continue;
        for (int j = 2; i * i + j * j * j < n; ++j) {
            if (mark[j]) continue;
            for (int k = 2; i * i + j * j * j + k * k * k * k <= n; ++k) {
                if (mark[k]) continue;
                mp[i * i + j * j * j + k * k * k * k] = true;
            }
        }
    }
    printf("%ld\n", mp.size());
    return 0;
}
/**************************************************************
	Problem: 21344
	Language: C++
	Result: 正确
	Time:478 ms
	Memory:42628 kb
****************************************************************/
