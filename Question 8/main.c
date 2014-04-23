//
//  main.c
//  Question 8
//
//  Created by Aidan Law on 23/04/2014.
//  Copyright (c) 2014 Aidan Law. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    printf("============================================================================\n\n");
    printf("What does the following code segment display for each of these input values?\n\n");
    printf("a. 0\nb. 7\nc. 25\nd. 812\n\n");
    printf("============================================================================\n\n");
    
    int num;                                //creates an integer variable called num
    
    printf("Enter a positive integer> ");   //prints "Enter a positive integer>"
    scanf("%d",&num);                       //sets the input to variable "num"
    while (num >0)                          //do the following as long as num is greater than 0
    {
        printf("%d ",num%10);                   //prints the remainder (modulus) of a number if it is divided by 10  e.g. 11/10 prints 1
        num = num/10;                           //divides the variable "num" by 10
    }                                       //loop continues until there are no whole numbers and the remainders have been printed
    printf("\n");                           //places the exit code on a new line
    return 0;
}

//for 0 output is a blank line
//for 7 output is               7
//for 25 output is              5 2
//for 812 output is             2 1 8
//essentially it prints the number backwards

//======================================================================================
//  equation proof
//                      812/10=81.2 and modulus is 2
//                      81/10=8.1 and modulus is 1
//                      8/10=0.8 and modulus is 8
//  as num is an integer, decimal places are not kept in memory so num is now equal to 0
//  while loop stops at this point and the output is
//  2 1 8
//======================================================================================

