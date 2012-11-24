#include "llist.h"

LList::LList()
{
    first = NULL;
    last = NULL;
    elements_count = 0;
}

void LList::add(char *d)
{
    DLNode *n = new DLNode(d);

    if (elements_count == 0) {
        first = n;
    } else {
        last->next = n;
        n->previous = last;
    }
    last =n;
    elements_count++;
}

void LList::print()
{
    DLNode *tmp = first;
    while (tmp) {
        tmp->print();
        tmp = tmp->next;
    }
}
