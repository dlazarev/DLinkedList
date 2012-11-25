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

    LList li(77);
    
    li.add(3);
    li.add(8);
    li.add(4);
    li.add(3);
    li.add(9);
    li.add(3);
    
    li.print();
    std::cout << "Searching elements with value 3... Found: " << li.search(3) << std::endl;
    std::cout << "Minimum of elements value = " << li.min() << std::endl;
//    std::cout << "Minimum elements value = " << li.min() << std::endl;

//    std::cout << "Search node with value 9:";
//    DLNode *tmp = li.searchByValue(7);
//    if (tmp) std::cout << " success! ->" << tmp->get() << std::endl;
//    else std::cout << "elements not found!" << std::endl;
    
    return 0;
}

