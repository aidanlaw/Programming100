//
//  main.c
//  Question 14
//
//  Created by Aidan Law on 24/04/2014.
//  Copyright (c) 2014 Aidan Law. All rights reserved.
//

#include <stdio.h>

#define PI 3.14159

int main(void)
{

    float int_rad, ext_rad, int_sphere, ext_sphere, skin;
    
    printf("Enter the internal radius of the sphere in cm: ");
    scanf("%f", &int_rad);
    
    printf("Enter the external radius of the sphere in cm: ");
    scanf("%f", &ext_rad);
    
    ext_sphere=(4/3)*PI*ext_rad*ext_rad*ext_rad;
    int_sphere=(4/3)*PI*int_rad*int_rad*int_rad;
    
    skin=ext_sphere-int_sphere;
    
    printf("\nThe amount of volume the material in the sphere displaces is %f cm^3\n\n", skin);

    
    return 0;
}

