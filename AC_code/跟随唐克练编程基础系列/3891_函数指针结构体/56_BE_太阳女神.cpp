template <class T>
void swap(T &a, T &b) {
    T c = a;
    a = b;
    b = c;
}

template <class T>
void Fun(T a[], int n) {
    for (int j = 0; j < n - 1; ++j) {
        for (int i = 0; i < n - j - 1; ++i) {
            if (a[i].count < a[i + 1].count) swap(a[i], a[i + 1]);
        }
    }
}

/**************************************************************
	Problem: 5236
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
