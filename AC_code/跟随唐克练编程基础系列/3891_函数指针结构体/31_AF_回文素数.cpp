/********************
此题只提交函数
函数名：PalindromicPrime
函数参数：正整数n
函数返回值：如果n是回文素数，返回1，否则返回0
**********************/

bool PalindromicPrime(int n) {
    int t = n, s = 0;
    while (t) {
        s = s * 10 + t % 10;
        t /= 10;
    }
    if (n != s) return false;
    int l = 0, r = n;
    while (l < r) {
        int mid = l + r + 1 >> 1;
        if (mid * mid <= n) l = mid;
        else r = mid - 1;
    }
    for (int i = 2; i <= l; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}
/**************************************************************
	Problem: 2978
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
