//
//  main.c
//  Question 3
//
//  Created by Aidan Law on 23/04/2014.
//  Copyright (c) 2014 Aidan Law. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    printf("===========================================================================\n\n");
    printf("Given the program below. \nWhat will be the printed values of x, y and z when the program is executed?\n\n");
    printf("===========================================================================\n\n");
    
    unsigned char x;                            /* unsigned char is a whole number */
    int y;                                      /* int is a whole number */
    float z;                                    /* float is a number with decimal places represented */
    
    x = (int) 25.5 + 100.6 + (char) 16.1;       /* 25   +   100     +   16 = 141 */
    y = 25.5 + 100.6 + (int) 16.1;              /* 25.5 +   100.6   +   16 = 142 */
    z = 25.5 + (int) (3.0/2.0);                 /* 25.5 +   1 = 26.500000 */
    
    printf("%d %d %f\n",x,y,z);                 /* 141 142 26.500000 */
    
    return 0;
}

