//
//  main.c
//  Question 11
//
//  Created by Aidan Law on 24/04/2014.
//  Copyright (c) 2014 Aidan Law. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int x, y;
    
    printf("Enter two numbers and the program will sort them from lowest to highest\n\n");
    
    printf("   Enter 1st number: ");
    scanf("%d", &x);
    
    printf("   Enter 2nd number: ");
    scanf("%d", &y);
    
    if (x<y)
    {
        printf("\n   %d and %d\n\n", x, y);
    }

    else if (x>y)
    {
        printf("\n   %d and %d\n\n", y, x);
    }
    
    else
    {
        printf("\n   The integer values of %d and %d are the same\n\n", x, y);  //integer values does not include the remainder
    }                                                                           //therefore 3.14 as an int is == 3
    
    return 0;
}

