#include <bits/stdc++.h>
using namespace std;

template <typename t>
class C_linked_list
{
    struct node
    {
        t data;
        node *link;
    };
    node *head;

public:
    C_linked_list()
    {
        head = NULL;
    }

    void cll_pushback(t x)
    {
        node *a = new node;
        a->data = x;
        a->link = head;

        if (head == NULL)
        {
            head = a;
            a->link = head;
        }
        else
        {
            node *last = head;
            while (last->link != head)
                last = last->link;
            last->link = a;
        }
    }

    void print()
    {
        if (head == NULL)
        {
            cout << "List is empty.";
            return;
        }

        node *last = head;
        do
        {
            cout << last->data << " ";
            last = last->link;
        } while (last != head);

        cout << endl;
    }
};

int main()
{
    C_linked_list<int> A;
    int n = 10, a[n] = {43, 5, 47, 76, 97, 8, 4, 13, 20, 36};
    for (int i = 0; i < n; i++)
        A.cll_pushback(a[i]);
    A.print();
}
