#include <iostream>
using namespace std;

struct Elem
{
    Elem* next, * prev;
    int info;
};

void enqueue(Elem*& first, Elem*& last, int info)
{
    Elem* tmp = new Elem;
    tmp->info = info;
    tmp->next = nullptr;
    if (last != nullptr)
        last->next = tmp;
    tmp->prev = last;
    last = tmp;
    if (first == nullptr)
        first = tmp;
}

int dequeue(Elem* &first, Elem* &last)
{
    Elem* tmp = first->next;
    int info = first->info;
    delete first;
    first = tmp;
    if (first == NULL)
        last = NULL;
    else
        first->prev = NULL;
    return info;
}

void print(const Elem* first)
{
    int i = 0;
    while (first != nullptr)
    {
        cout << first->info << " ";
        i++;
        first = first->next;
    }
    cout << endl;
}

int count(const Elem* L)
{
    int k = 0;
    while (L != nullptr)
    {
        k++;
        L = L->next;
    }
    return k;
}

int check(const Elem* L)
{
    bool c = false;
    while (L != nullptr)
    {
        if (L->prev != NULL)
        {
            if (L->prev->info == L->info)
            {
                c = true;
            }
        }
        L = L->next;
    }
    return c;
}
