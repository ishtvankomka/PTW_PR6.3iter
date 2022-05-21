#include <iostream>
#include "Elem.h"
using namespace std;

int main() {
    int number = 5;
    Elem* first = nullptr, * last = nullptr;
    enqueue(first, last, 1);
    enqueue(first, last, 2);
    enqueue(first, last, 23);
    enqueue(first, last, 47);
    enqueue(first, last, 1);
    print(first);
    if (check(first))
    {
        cout << "adjacent equal numbers are available " <<endl<<endl;
    }
    else
    {
        cout << "adjacent equal numbers aren't available " <<endl<<endl;
    }
    for (size_t i = 0; i < number; i++)
            dequeue(first, last);
    return 0;
}
