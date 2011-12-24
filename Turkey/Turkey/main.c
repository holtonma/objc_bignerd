//
//  main.c
//  Turkey
//
//  Created by MARK HOLTON on 12/23/11.
//  Copyright (c) 2011 RedGrind. All rights reserved.
//

#include <stdio.h>

int main (int argc, const char * argv[])
{
    // Declare variable for 'weight' that is a float and give it a value
    float weight = 14.2;
    
    // log it to the user
    printf("The turkey weighs %f.\n", weight);
    
    // Declare variable for 'cooking time' that is a float
    float cookingTime = 15.0 + 15.0 * weight;
    
    // Log that to the user
    printf("Cook it for %f minutes.\n", cookingTime);
    
    // end this function and indicate success
    return 0;
}


