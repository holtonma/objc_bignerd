//
//  main.c
//  Triangle
//
//  Created by MARK HOLTON on 12/26/11.
//  Copyright (c) 2011 RedGrind. All rights reserved.
//

#include <stdio.h>

// takes two angles and computes the third
float remainingAngle(ang1, ang2){
    float ang3 = 180 - ang1 - ang2;
    return ang3;
}

int main (int argc, const char * argv[])
{

    // insert code here...
    float angleA = 30.0;
    float angleB = 60.0;
    float angleC = remainingAngle(angleA, angleB);
    printf("The third angle is %.2f\n", angleC);
    return 0;
}

