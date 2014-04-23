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
    printf("======================================\n\n");
    printf("What is printed by the following code?\n\n");
    printf("======================================\n\n");
    
    int i;                      //sets the variable "i" as an integer (placeholder for a whole number)
    
    for(i=40; i>=20; i-=5)      //starts a loop that sets i=40, and will subtract 5 each loop until i is less than 20
    {
        printf("%d\n", i + 2);  //prints the variable "i" plus 2  so if i==40 then 42 will be printed
                                // the \n suggests a new line will be made for each printed number
    }
    return 0;
}

//Output will be

//======================================

//What is printed by the following code?

//======================================

//42
//37
//32
//27
//22

