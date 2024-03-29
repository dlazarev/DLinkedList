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
    
    li.add(10);
    li.add(4);
    li.add(3);
    li.add(9);
    li.add(4);
    li.add(2);
    li.add(7);
    li.add(4);
    li.add(10);
    li.add(5);
    li.add(6);
    li.add(8);
    
    li.print();
    std::cout << "Sorting..." << std::endl;
    li.sort();
    li.print();
    
    std::cout << "Minimum elements value = " << li.min() << std::endl;
    std::cout << "Numbers elements with value 4: " << li.searchByValue(4) << std::endl;;
    std::cout << "Delete the elements with value 4..." << std::endl;
    li.remove(4);
    li.print();
    return 0;
}

