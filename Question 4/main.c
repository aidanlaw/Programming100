//
//  main.c
//  Question 4
//
//  Created by Aidan Law on 23/04/2014.
//  Copyright (c) 2014 Aidan Law. All rights reserved.
//

#include <stdio.h>
int main(){
    
    printf("===============================================================================================\n\n");
    printf("The following was an incomplete program to find the largest of three numbers.\n");
    printf("Complete the program by filling in the appropriate statements in line numbers 90, 110 and, 140.\n\n");
    printf("===============================================================================================\n\n");
    
    int a, b, c;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a>b && a>c)                                     // 90        if (         )
        printf("%d is the largest number\n", a);
    else if (b>a && b>c)                                // 110  else if (         )
        printf("%d is the largest number\n", b);
    else                                                // 140     else (         )
        printf("%d is the largest number\n", c);
    
    return 0;
    
    
}

