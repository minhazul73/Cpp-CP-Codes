#include <bits/stdc++.h>
using namespace std;

template <typename t>
class linked_list
{
    struct node
    {
        t data;
        node *link;
    };
    node *head;

public:
    linked_list()
    {
        head = NULL;
    }
    void ll_pushback(t x)
    {
        node *a = new node;
        a->data = x;
        a->link = NULL;

        if (head == NULL)
            head = a;
        else
        {
            node *last = head;
            while (last->link != NULL)
                last = last->link;
            last->link = a;
        }
    }
    void search(t x) //////////////////////// 2
    {
        node *last = head;
        int f = 0;
        while (last)
        {
            if (last->data == x)
            {
                f = 1;
                break;
            }
            last = last->link;
        }
        if (f)
            cout << "value " << x << "found\n";
        else
            cout << "value " << x << "not found\n";
    }
    void insert(t x, int pos) //////////////////////// 3
    {
        node *a = new node;
        a->data = x;
        a->link = NULL;

        if (head == NULL)
            head = a;
        else if (pos == 1)
        {
            a->link = head;
            head = a;
        }
        else
        {
            node *last = head;
            int cnt = 1, f = 0;
            while (last)
            {
                cnt++;
                if (pos == cnt)
                {
                    a->link = last->link;
                    last->link = a;
                    f = 1;
                    break;
                }
                last = last->link;
            }
            if (f == 0)
                last->link = a;
        }
    }

    void Delete(int pos) //////////////////////// 4
    {
        node *temp = new node, *last = head;
        int cnt = 1;
        if (head == NULL)
            return;
        if (pos == 1)
        {
            temp = head;
            head = head->link;
            delete temp;
        }
        else
        {
            while (last->link != NULL)
            {
                cnt++;
                if (cnt == pos)
                {
                    temp->link = last->link;
                    last->link = last->link->link;
                    delete temp;
                    break;
                }
                last = last->link;
            }
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
};
int main()
{
    linked_list<int> A;
    int n = 10, a[n] = {43, 5, 47, 76, 97, 8, 4, 13, 20, 36};
    for (int i = 0; i < n; i++)
        A.ll_pushback(a[i]);
    A.insert(100, 11);
    // A.Delete(1);
    // A.print();
    // A.search(97);
    // A.search(200);
    A.print();
}