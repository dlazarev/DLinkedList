#ifndef DLNODE_H
#define DLNODE_H

class DLNode
{
friend class LList;
private:
    char* data;
    DLNode *next;
    DLNode *previous;
public:
    DLNode(char* d);
    void print();
};

#endif // DLNODE_H
