//
//  main.c
//  PBR - Pass by Reference.  Obj-C Big Nerd Ranch location 1426, Ch.9
//
//  Created by MARK HOLTON on 1/2/12.
//  Copyright (c) 2012 RedGrind. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main (int argc, const char * argv[])
{
    double pi = 3.14;
    double integerPart;
    double fractionPart;
    
    // Pass the address of integerPart as an argument
    fractionPart = modf(pi, &integerPart);
    
    // Find the value stored in integerPart
    printf("integerPart = %.0f, fractionPart = %.2f \n", integerPart, fractionPart);
    
    return 0;
}

