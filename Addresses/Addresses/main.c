//
//  main.c
//  Addresses
//
//  Created by MARK HOLTON on 1/2/12.
//  Copyright (c) 2012 RedGrind. All rights reserved.
//

#include <stdio.h>

int main (int argc, const char * argv[])
{
    int i = 17;
    int *addressOfI = &i;
    // insert code here...
    printf("i stores its value at %p\n", addressOfI);
    printf("the int stored at addressOfI is %d\n", *addressOfI);
    *addressOfI = 89;
    printf("Now i is %d\n", i);
    printf("An int is %zu bytes \n", sizeof(i));
    printf("A pointer is %zu bytes \n", sizeof(addressOfI));
    printf("this function starts at %p\n", main);
    return 0;
}

