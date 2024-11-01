#include <bits/stdc++.h>
using namespace std;

template <typename t>
class D_linked_list
{
    struct node
    {
        t data;
        node *prev;
        node *next;
    };
    node *head;
    node *tail;
public:
    D_linked_list()
    {
        head = NULL;
        tail = NULL;
    }

    void dll_pushback(t x)
    {
        node *a = new node;
        a -> data = x;
        a -> prev = NULL;
        a -> next = NULL;

        if(head == NULL)
        {
            head = a;
            tail = a;
        }
        else 
        {
            a -> prev = tail;
            tail -> next = a;
            tail = a;
        }
    }
    void printForward()
    {
        node *temp = head;
        while(temp)
        {
            cout << temp -> data << " ";
            temp = temp -> next;
        }
    }
};

int main()
{
    D_linked_list<int> A;
    int n = 10, a[n] = {43, 5, 47, 76, 97, 8, 4, 13, 20, 36};
    for (int i = 0; i < n; i++)
        A.dll_pushback(a[i]);
    A.printForward();
}