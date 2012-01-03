//
//  main.c
//  FoundOne
//
//  Created by MARK HOLTON on 1/2/12.
//  Copyright (c) 2012 RedGrind. All rights reserved.
//

#include <stdio.h>

int main (int argc, const char * argv[])
{
    for (int i=99; i>=0; i-=3) {
        if (i % 5 == 0){
            printf("Found one! \n");
        }else{
            printf("%d \n", i);
        }
    }
    return 0;
}

