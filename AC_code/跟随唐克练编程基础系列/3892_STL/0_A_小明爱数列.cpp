#include <cstdio>

struct Node {
    int val;
    Node *pre, *ne;

    Node() {
        val = 0;
        pre = nullptr;
        ne = nullptr;
    }
};

int main() {
    int n, k, l = 0;
    Node *h = new Node, *t = new Node;
    h->ne = t, t->pre = h;
    scanf("%d%d", &n, &k);
    Node *lst = h;
    for (int i = 1; i <= n; ++i) {
        Node *tmp = new Node;
        scanf("%d", &tmp->val);
        tmp->pre = lst; 
        tmp->ne = lst->ne;
        lst->ne = tmp;
        tmp->ne->pre = tmp;
        lst = lst->ne;
        l++;
    }
    while (k--) {
        char s[2];
        scanf("%s", s);
        if (s[0] == 'D') {
            int x;
            scanf("%d", &x);
            Node *tmp = h->ne;
            if (x > l) continue;
            for (int i = 0; i < x; ++i) tmp = tmp->ne;
            tmp->pre->ne = tmp->ne;
            tmp->ne->pre = tmp->pre;
            delete tmp;
            l--;
        }
        else {
            int x, y;
            scanf("%d%d", &x, &y);
            Node *tmp = h->ne;
            if (x > l) x = l;
            for (int i = 0; i < x; ++i) tmp = tmp->ne;
            Node *p = new Node;
            p->val = y;
            p->pre = tmp->pre;
            tmp->pre->ne = p;
            p->ne = tmp;
            tmp->pre = p;
            l++;
        }
    }
    printf("%d\n", l);
    Node *tmp = h->ne;
    while (tmp != t) {
        printf("%d ", tmp->val);
        tmp = tmp->ne;
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 9828
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1304 kb
****************************************************************/
