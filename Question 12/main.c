//
//  main.c
//  Question 12
//
//  Created by Aidan Law on 24/04/2014.
//  Copyright (c) 2014 Aidan Law. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    printf("============================================================================\n\n");
    printf("Write a complete C program to read in two floating point numbers from the\n");
    printf("keyboard and print them out in descending order. That is, if the values are:\n\n");
    printf("          12.5\n          11.7\n\n");
    printf("Then the output would be 12.5 followed by 11.7\n\n");
    printf("============================================================================\n\n");
    
    float x, y;                                 //sets the variables x and y as floats (allows decimals to be used and stored)
    
    printf("Enter two numbers and the program will sort them in descending order\n\n"); //prints the comment and adds two lines
    printf("Enter 1st number: ");               //prints comment
    scanf("%f", &x);                            //scans for the users input and applies it to the x variable
    printf("\nEnter 2nd number: ");             //prints comment
    scanf("%f", &y);                            //scans for the users input and applies it to the y variable
    printf("\n");                               //prints an empty line ( to make the presentation better
    
    if (x==y)                                       //if x is equal to y then execute the following in the {}
    {
        printf("%f is equal to %f\n\n", x, y);      //prints "(x variable) is equal to (y variable)"
    }
    else if (x<y)                                   //if first "if" statement is not met the execute the following in the {}
    {
        printf("%f %f\n\n", y, x);                  //prints "(y variable) (x variable)"
    }
    else                                            //if no previous requirements are met then execute the following
        printf("%f %f\n\n", x, y);                  //prints "(x variable) (y variable)"
    
    return 0;
}

