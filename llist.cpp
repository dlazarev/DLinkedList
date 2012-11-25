#include "llist.h"

LList::LList()
{
    head = NULL;
    tail = NULL;
    elements_count = 0;
}

void LList::add(int d)
{
    DLNode *n = new DLNode(d);

    if (elements_count == 0) {
        head = n;
    } else {
        tail->next = n;
        n->previous = tail;
    }
    tail =n;
    elements_count++;
}

void LList::print()
{
    DLNode *tmp = head;
    while (tmp) {
        tmp->print();
        tmp = tmp->next;
    }
}

int LList::min()
{
    if (elements_count == 0) return -1;
    
    int val = head->data;
    DLNode *tmp = head;
    
    while (tmp) {
        if (tmp->data < val) val = tmp->data;
        tmp = tmp->next;
    }
    
    return val;
}

unsigned int LList::searchByValue(int val)
{
    if (!head) return 0;
    
    unsigned int count = 0;
    DLNode *tmp = head;
    while (tmp) {
        if (tmp->data == val) count++;
        tmp = tmp->next;
    }
    return count;
}
