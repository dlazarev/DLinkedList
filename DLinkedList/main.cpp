//
//  main.cpp
//  DLinkedList
//
//  Created by Dmitry Lazarev on 24.11.12.
//  Copyright (c) 2012 Ilya Lazarev. All rights reserved.
//

#include <iostream>
#include "llist.h"

int main(int argc, const char * argv[])
{

    LList li;
    int a = 3, b =8, c = 2, d = 9;
    
    li.add(a);
    li.add(b);
    li.add(c);
    li.add(d);
    
    li.print();
    std::cout << "Minimum elements value = " << li.min() << std::endl;

    std::cout << "Search node with value 9:";
    DLNode *tmp = li.searchByValue(7);
    if (tmp) std::cout << " success! ->" << tmp->get() << std::endl;
    else std::cout << "elements not found!" << std::endl;
    
    return 0;
}

