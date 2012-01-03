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
    int i;
    for (i=0; i < 12; i++){
        if (i % 3 == 0){
            continue;
        }
        printf("Checking i = %d\n", i);
        if (i + 90 == i * i){
            break;
        }
        
    }
    printf("The answer is %d.\n", i);
    return 0;
}

int main (int argc, const char * argv[])
{
    // BigNerdRanch Obj-C book, location 1215 of 5847, Chapter 7 Loops
    runWhile();
    runFor();
    
    return 0;
}

