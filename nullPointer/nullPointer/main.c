//
//  main.c
//  nullPointer
//
//  Created by MARK HOLTON on 1/2/12.
//  Copyright (c) 2012 RedGrind. All rights reserved.
//

#include <stdio.h>

int main (int argc, const char * argv[])
{
    float *myPointer;
    printf("how much memory a float consumes: %zu bytes \n", sizeof(*myPointer));
    printf("how much memory a float pointer consumes: %zu bytes \n", sizeof(myPointer));
    
    short test;
    test = -9999;
    printf("smallest short int: %d \n", test);
    unsigned short test2 = 9999;
    printf("largest unsigned short int: %d \n", test2);
    return 0;
}

