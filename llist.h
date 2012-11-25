#ifndef LLIST_H
#define LLIST_H

#include <iostream>

//
class LList
{
private:
    int data;
    LList *next;
public:
    LList();
    void add(int);
    void print();
};

#endif // LLIST_H
