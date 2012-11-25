#ifndef DLNODE_H
#define DLNODE_H

class DLNode
{
friend class LList;
private:
    int data;
    DLNode *next;
    DLNode *previous;
public:
    DLNode(int d);
    void print();
    int get() { return data; }
};

#endif // DLNODE_H
