//
//  main.c
//  Degrees
//
//  Created by MARK HOLTON on 12/26/11.
//  Copyright (c) 2011 RedGrind. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// declare a static (only accessible by fn's within this file, main.c
static float lastTempConverted = 50;

float convertToCelcius(int degC)
{
    lastTempConverted = degC;
    float degF = 1.8 * degC + 32;
    return degF;
}
int main (int argc, const char * argv[])
{

    // insert code here...
    printf("28 deg Celcius is: %f deg Fahrenheit \n", convertToCelcius(28));
    float freezeInC = 0;
    float freezeInF = convertToCelcius(freezeInC);
    printf("Water freezes in %f deg C, which is %f deg F \n", freezeInC, freezeInF);
    return EXIT_SUCCESS;
}

