#include <iostream>
#include "dlnode.h"

DLNode::DLNode(int d)
{
    next = NULL;
    previous = NULL;
    data = d;
}

void DLNode::print()
{
    std::cout << data << std::endl;
}
