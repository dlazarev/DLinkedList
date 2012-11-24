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
    int a = 3, b =8, c = 2;
    
    li.add(a);
    li.add(b);
    li.add(c);
    
    li.print();
    return 0;
}

