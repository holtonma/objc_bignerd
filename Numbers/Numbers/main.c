//
//  main.c
//  Numbers
//
//  Created by MARK HOLTON on 12/26/11.
//  Copyright (c) 2011 RedGrind. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float testingCast(int num1, int num2){
    float result = num1 / (float)num2;
    return result;
}

void printFloats(){
    double y = 12345.6789;
    printf("y is %f\n", y);
    printf("y is %e\n", y);
    
    return 0;
}

int main (int argc, const char * argv[])
{

    // location 1096 of 5847 in BigNerdRanch Obj-C book
    printf("3*3+5*2 = %d.\n", 3*3+5*2);
    printf("11 / 3 = %f.\n", testingCast(11, 3));
    printf("The absolute value of -5 is %d\n", abs(-5));
    printFloats();
    
    printf("sine of 1 radian is %.3f \n", sin(1.0));
    return 0;
}

