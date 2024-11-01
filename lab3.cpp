#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *link;
};
node *head;

void insert(int x, int pos)
{
    node *a = new node;
    a->data = x;
    a->link = NULL;

    if(head == NULL) head = a;
    else 
    {
        node *last = head;
        int cnt = 1, f = 0;
        while(last)
        {
            if(pos == cnt)
            {
                a->link = last->link;
                last->link = a;
                f = 1;
                break;
            }
            cnt++;
            last = last->link;
        }
        if(!f) last->link = a;
    }
    
}

void print() //////////////////////// 1
{
    node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->link;
    }
}
int main()
{
    head = NULL;
    int n = 10, a[n] = {43, 5, 47, 76, 97, 8, 4, 13, 20, 36};
    for (int i = 0; i < n; i++)
        //A.ll_pushback(a[i]);
        insert(a[i], i + 1);
    insert(100, 11);
    // A.Delete(1);
    // A.print();
    // A.search(97);
    // A.search(200);
    print();
}