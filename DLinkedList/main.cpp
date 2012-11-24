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

    LList a;
    char str0[] = "first elem";
    char str1[] = "second elem";
    char str2[] = "третий элемент";
    
    a.add(str0);
    a.add(str1);
    a.add(str2);
    
    a.print();
    return 0;
}

