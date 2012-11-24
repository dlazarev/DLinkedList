#include <iostream>
#include "dlnode.h"

DLNode::DLNode(char *d)
{
    next = NULL;
    previous = NULL;
    data = d;
}

void DLNode::print()
{
    std::cout << data << std::endl;
}
