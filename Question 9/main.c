//
//  main.c
//  Question 9
//
//  Created by Aidan Law on 24/04/2014.
//  Copyright (c) 2014 Aidan Law. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    printf("======================================\n\n");
    printf("What is printed by the following code?\n\n");
    printf("======================================\n\n");
    
    int i;                  //creates an integer variable called i
    float r = 0.0;          //creates a float variable called r and sets it to 0.0
    
    do                      //do the following loop before checking while command
    {
        r += 0.3;               //let "r" value add 0.3 each time the loop is completed
        i = r;                  //let "i" equal "r" but as "i" is set as a whole number integer, any remainders are truncated
        printf("%d\n", i);      //prints the "i" value and starts a new line after the variable is shown
    } 
    while (r < 1.8);        //Continues to execute the loop as long as "r" is less than 1.8
    return 0;
}

