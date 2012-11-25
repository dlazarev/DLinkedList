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
    LList(int);
    void add(int);
    void print();
    unsigned int search(const int val);
    int min();
};

#endif // LLIST_H
