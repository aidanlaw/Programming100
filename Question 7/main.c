//
//  main.c
//  Question 7
//
//  Created by Aidan Law on 23/04/2014.
//  Copyright (c) 2014 Aidan Law. All rights reserved.
//

#include <stdio.h>

int main()
{
    printf("================================================================\n\n");
    printf("What will be printed out when the following program is executed?\n\n");
    printf("================================================================\n\n");
    
    int i=5,j;                      //setting 5 as i and j as a variable
    
    while(i>0)                      //keep looping everything within the curly-wurlys as long as i is greater than 0
    {
        printf("%d==", i);              // prints the value of i followed by ==  e.g. "5=="
        j=i;                            // sets j variable to the same value of i
        while(j>0)                      // while loop that completes the following as long as j is greater than 0,
        {
            printf("#");                    //continues to print # until while loop needs are met (j=0)
            j=j-1;                          //subtracts 1 from the j value and while loop repeats until j is equal to 0
        }
        printf("\n");                   //creates a new line
        i=i-1;                          //subtracts 1 from the i value and repeats until while loop is equal to 0
    }
    return 0;
}

//Outcome will be

//5==#####
//4==####
//3==###
//2==##
//1==#

