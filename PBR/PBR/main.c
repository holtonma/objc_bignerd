//
//  main.c
//  PBR - Pass by Reference.  Obj-C Big Nerd Ranch location 1426, Ch.9
//
//  Created by MARK HOLTON on 1/2/12.
//  Copyright (c) 2012 RedGrind. All rights reserved.
//

#include <stdio.h>
#include <math.h>

void cartesianToPolar(float x, float y, double *rPtr, double *thetaPtr){
    // Store the radius in the supplied address
    if (rPtr){ // make sure Pointers are not null
        *rPtr = sqrt(x*x + y*y);
    }
    // is thetaPtr NULL?
    if (!thetaPtr){
        // skip rest of fn
        return;
    }
    // calculate theta:
    float theta;
    if (x == 0.0){
        if ( y == 0.0 ){
            theta = 0.0; //theoretically undefined
        } else if ( y > 0 ){
          theta = M_PI_2;
        } else {
          theta = - M_PI_2;
        }
        
    } else {
        theta = atan(y/x);
    }
    // store theta in the supplied address (last param)
    *thetaPtr = theta;
}

int main (int argc, const char * argv[])
{
    double pi = 3.14;
    double integerPart;
    double fractionPart;
    
    // Pass the address of integerPart as an argument
    fractionPart = modf(pi, &integerPart);
    
    // Find the value stored in integerPart
    printf("integerPart = %.0f, fractionPart = %.2f \n", integerPart, fractionPart);
    
    // onto finding theta...
    double x = 3.0;
    double y = 4.0;
    double radius;
    double angle;
    
    cartesianToPolar(x, y, &radius, &angle);
    printf("(%.2f, %.2f) becomes (%.2f radians, %.2f)\n", x, y, radius, angle);
    
    return 0;
}

