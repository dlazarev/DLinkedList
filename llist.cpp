#include "llist.h"

LList::LList()
{
    next = NULL;
    data = 0;
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