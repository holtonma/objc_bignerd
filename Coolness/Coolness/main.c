//
//  main.c
//  Coolness
//
//  Created by MARK HOLTON on 12/26/11.
//  Copyright (c) 2011 RedGrind. All rights reserved.
//

#include <stdio.h>

void runWhile(){
    int i = 0;
    while (i < 12) {
        printf("%d. Mark is Cool\n", i);
        i++;
    }
    
}

void runFor(){
    for (int i=0; i < 12; i++){
        printf("%d. Mark is Cool\n", i);
    }
}

int main (int argc, const char * argv[])
{
    // BigNerdRanch Obj-C book, location 1215 of 5847, Chapter 7 Loops
    runWhile();
    runFor();
    
    return 0;
}

