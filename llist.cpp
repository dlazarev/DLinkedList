#include "llist.h"

LList::LList()
{
    next = NULL;
    data = 0;
}

LList::LList(int a)
{
    next = NULL;
    data = a;
}

void LList::add(int a)
{

    LList *tmp, *b = new LList;
    tmp = this;
    while(tmp->next) tmp = tmp->next;
    tmp->next = b;
    b->data = a;
}

void LList::print()
{
    LList *tmp = this;
    while(tmp) {
        std::cout << tmp->data << std::endl;
        tmp = tmp->next;
    };
}

unsigned int LList::search(const int val)
{
    LList *tmp = this;
    unsigned int count = 0;
    
    while (tmp) {
        if (tmp->data == val) count++;
        tmp = tmp->next;
    }
    return count;
}

int LList::min() {
    LList *tmp = this;
    int min_val = this->data;
    
    while (tmp) {
        if (tmp->data < min_val) min_val = tmp->data;
        tmp = tmp->next;
    }
    return min_val;
}

unsigned int LList::remove(const int val)
{
    LList *cur = this;
    LList *prev = NULL;
    unsigned int count = 0;
    
    while (cur) {
        if (cur->data == val)
            if (prev) { // cur is point on not first element now
                prev->next = cur->next;
                cur = cur->next;
                delete cur;
            }
        prev = cur;
        cur = cur->next;
    }
    return count;
}

