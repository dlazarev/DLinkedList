#include "llist.h"

LList::LList()
{
    head = NULL;
    tail = NULL;
    elements_count = 0;
}

LList::~LList()
{
    if (!head) return;
    
    DLNode *prev;
    DLNode *cur = tail;
    
    while (cur) {
        prev = cur->previous;
        delete cur;
        cur = prev;
    }
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

void LList::swap(DLNode *a, DLNode* b)
{
    int tmp;
    tmp = a->data;
    a->data = b->data;
    b->data = tmp;
}

void LList::sort() // Bubble method
{
    if (!head) return;
    
    for (DLNode *a = head; a->next; a=a->next)
        for (DLNode *b = tail; b!=a; b=b->previous)
            if (b->data < a->data) swap(a, b);
}

unsigned int LList::remove(const int val)
{
    if (!head) return 0;
    
    unsigned int count=0;
    DLNode *tmp = head;
    DLNode *cur;
    
    while (tmp) {
        if (tmp->data == val) {
            if (tmp != head) tmp->previous->next = tmp->next;
            else head = tmp->next;
            if (tmp != tail) tmp->next->previous = tmp->previous;
            else tail = tmp->previous;
            cur = tmp;
            tmp = tmp->next;
            delete cur;
            count++;
        }
        else tmp = tmp->next;
    }
    
    return count;
}
