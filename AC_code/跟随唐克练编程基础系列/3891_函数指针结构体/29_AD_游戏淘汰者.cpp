/*在下面完成Fun函数编写，提交时只需要提交Fun函数即可*/
template <class T>
T Fun(T a[], int n) {
    int mn = __INT_MAX__;
    T res;
    for (int i = 0; i < n; ++i) {
        int s = a[i].game[0] + a[i].game[1] + a[i].game[2];
        a[i].game[3] = s;
        if (mn > s) {
            mn = s;
            res = a[i];
        }
    }
    return res;
}
/**************************************************************
	Problem: 3299
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
