#ifndef LLIST_H
#define LLIST_H

#include <iostream>
#include "dlnode.h"

class LList
{
private:
    unsigned int elements_count;
    DLNode *first;
    DLNode *last;
public:
    LList();
    void add(int d);
    unsigned int count() { return elements_count; }
    void print();
    int min();
    DLNode* byValue(int);
};

#endif // LLIST_H
