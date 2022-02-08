#include <bits/stdc++.h>
using namespace std;
#define mx 1000
int arr[mx];
int tree[mx*3];

void making_tree(int node, int b, int e)
{
    if(b==e)
    {
        tree[node] = arr[b];
        return;
    }
    int Left = 2*node;
    int Right = 2*node+1;
    int mid = (b+e)/2;

    making_tree(Left, b, mid);
    making_tree(Right, mid+1, e);
    tree[node] = tree[Left]+tree[Right];
}

int query(int node, int b, int e, int i, int j)
{
    if(b>j || e<i)
        return 0;
    if(b>=i && e<=j)
        return tree[node];

    int Left = node*2;
    int Right = node*2+1;
    int mid = (b+e)/2;

    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid+1, e, i, j);
    return p1+p2;
}

void update(int node, int b, int e, int index, int new_value)
{
    if(index > e || index < b)
        return;
    if(b==e)
    {
        tree[node] = new_value;
        return;
    }
    int Left = node*2;
    int Right = node*2 + 1;
    int mid = (b+e)/2;

    update(Left, b, mid, index, new_value);
    update(Right, mid+1, e, index, new_value);
    tree[node] = tree[Left] + tree[Right];
}

int main()
{
    int test, kase;
    scanf("%d", &test);
    for(kase=1; kase<=test; kase++)
    {
        int n, q, q1[50000], q2[50000];
        cin >> n >> q;
        for(int i=1; i<=n; i++)
            cin >> arr[i];

        for(int i=1; i<=q; i++)
            cin >> q1[i] >> q2[i];


        /*making_tree(1, 1, n);
        cout << "Result : " << query(1, 1, n, 1, n) << endl;

        int index;
        printf("Enter the index you want to update: ");
        cin >> index;

        int value;
        printf("Enter the value: ");
        cin >> value;

        update(1, 1, n, index, value);
        cout << "Result after update 1 : " << query(1, 1, n, 1, n) << endl;*/
    }
    return 0;
}

