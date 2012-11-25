#include "llist.h"

LList::LList()
{
    first = NULL;
    last = NULL;
    elements_count = 0;
}

void LList::add(int d)
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

int LList::min()
{
    if (elements_count == 0) return -1;
    
    int val = first->data;
    DLNode *tmp = first;
    
    while (tmp) {
        if (tmp->data < val) val = tmp->data;
        tmp = tmp->next;
    }
    
    return val;
}

unsigned int LList::searchByValue(int val)
{
    return 0;
}
