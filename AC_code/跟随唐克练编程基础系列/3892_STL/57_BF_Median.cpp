#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

const int N = 1000010;

map<int, int> mp;
int a[N], b[N], n, m;
vector<int> vec;

int search_1(int t) {
    int l = 0, r = m;
    while (l < r) {
        int mid = l + r + 1 >> 1;
        if (t >= vec[mid]) l = mid;
        else r = mid - 1;
    }
    return l;
}

int search_2(int t) {
    int l = 0, r = m;
    while (l < r) {
        int mid = l + r + 1 >> 1;
        if (t <= vec[mid]) r = mid - 1;
        else l = mid;
    }
    return l;
}

bool check(int mid) {
    long long cnt = 0;
    for (int i = 1; i <= n; ++i) {
        cnt += b[search_1(a[i] + mid)] - b[search_2(a[i] - mid)] - 1;
    }
    return cnt >= ((long long)n * (n - 1) >> 1);
}

int main() {
    while (scanf("%d", &n) != EOF) {
        memset(b, 0, sizeof(b));
        mp.clear();
        vec.clear();

        for (int i = 1; i <= n; ++i) {
            scanf("%d", &a[i]);
            vec.push_back(a[i]);
        }

        vec.push_back(0);
        sort(vec.begin(), vec.end());
        vec.erase(unique(vec.begin(), vec.end()), vec.end());
        m = vec.size() - 1;
        for (int i = 0; i <= m; ++i) {
            mp[vec[i]] = i;
        }

        for (int i = 1; i <= n; ++i) {
            b[mp[a[i]]]++;
        }
        for (int i = 1; i <= m; ++i) {
            b[i] += b[i - 1];
        }
        int l = 0, r = (--mp.end())->first - (++mp.begin())->first;
        while (l < r) {
            int mid = l + r >> 1;
            if (check(mid)) r = mid;
            else l = mid + 1;
        }
        printf("%d\n", l);
    }
    return 0;
}
/**************************************************************
	Problem: 21433
	Language: C++
	Result: 正确
	Time:4 ms
	Memory:9184 kb
****************************************************************/
