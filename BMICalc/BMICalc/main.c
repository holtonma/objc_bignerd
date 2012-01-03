//
//  main.c
//  BMICalc
//
//  Created by MARK HOLTON on 1/2/12.
//  Copyright (c) 2012 RedGrind. All rights reserved.
//

#include <stdio.h>

// declare struct Person
typedef struct {
    float heightInMeters;
    int weightInKilos;
} Person;

float bodyMassIndex(Person p){
    return p.weightInKilos / (p.heightInMeters * p.heightInMeters);
}

int main (int argc, const char * argv[])
{
    Person person;
    person.weightInKilos = 96;
    person.heightInMeters = 1.8;
    float bmi = bodyMassIndex(person);
    printf("person weighs %i kilograms\n", person.weightInKilos);
    printf("person height %.2f meters tall\n", person.heightInMeters);
    printf("person has %.2f BMI\n", bmi);
    return 0;
}

