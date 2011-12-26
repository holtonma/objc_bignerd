//
//  main.c
//  Numbers
//
//  Created by MARK HOLTON on 12/26/11.
//  Copyright (c) 2011 RedGrind. All rights reserved.
//

#include <stdio.h>

int main (int argc, const char * argv[])
{

    // location 1096 of 5847 in BigNerdRanch Obj-C book
    unsigned long x = 255;
    printf("x is %lu.\n", x);
    printf("In octal, x is %lo.\n", x);
    printf("In hexadecimal, x is %lx.\n", x);
    return 0;
}

