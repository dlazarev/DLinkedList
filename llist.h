#ifndef LLIST_H
#define LLIST_H

#include <iostream>

class LList
{
private:
    class DLNode
    {
        friend class LList;
    private:
        int data;
        DLNode *next;
        DLNode *previous;
    public:
        DLNode() { next = NULL; previous = NULL; data = 0; }
        DLNode(int d) { next = NULL; previous = NULL; data = d; }
        void print() { std::cout << data << std::endl; }
        int get() { return data; }
    };
    unsigned int elements_count;
    DLNode *head;
    DLNode *tail;
    void swap(DLNode* a, DLNode* b);
public:
    LList();
    ~LList();
    void add(int d);
    unsigned int count() { return elements_count; }
    void print();
    int min();
    unsigned int searchByValue(int);
    void sort();
    unsigned int remove(const int val);
};

#endif // LLIST_H
