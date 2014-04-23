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
    printf("==========================================================================================\n\n");
    printf("Write an if then else statement to output the grade ‘F’ when the integer variable mark is:\n");
    printf("          0, 1, 2, 3 or 4\n");
    printf("and output the grade ‘P’ when the value of mark is:\n");
    printf("          5, 6, 7, 8, 9 or 10\n\n");
    printf("==========================================================================================\n\n");
    
    int grade;                              //name the variable "grade"
    
    printf("Input  grade from 0 to 10: ");  //prints the comment
    scanf("%d", &grade);                    //sets the user input to the variable "grade"
    
    if (grade<5)                            //if the grade is less than 5, what ever is in the {} will be executed
    {
        printf("The grade is: F\n\n");      //prints "The grade is: F" and puts two new lines after the comment
    }
    else                                    //else statement captures any input for grade that is 5 or greater
        printf("The grade is: P\n\n");      //prints "The grade is: P" and puts two new lines after the comment
    
    return 0;
}

