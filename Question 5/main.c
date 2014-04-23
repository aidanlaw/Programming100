//
//  main.c
//  Question 5
//
//  Created by Aidan Law on 23/04/2014.
//  Copyright (c) 2014 Aidan Law. All rights reserved.
//

#include <stdio.h>

int main()
{
    printf("=============================================================================\n\n");
    printf ("You are a sound engineer at an outdoor rock concert. Due to complaints by\n");
    printf ("neighbouring residents, you want to associate sound loudness measured in\n");
    printf ("decibels (dB) with the human perception of the sound. The following table\n");
    printf ("shows the relationship between these\n\n");
    printf ("Loudness in decibel (dB)           Perception\n\n");
    printf ("      10 - 49                      quiet\n");
    printf ("      50 - 69                      intrusive\n");
    printf ("      70 - 89                      annoying\n");
    printf ("      90 - 109                     very annoying\n");
    printf ("      110 - 129                    uncomfortable\n\n\n");
    printf ("If the sound loudness is declared as:\n\n");
    printf ("int sound_dB\n\n");
    printf ("write a C program using the SWITCH-CASE control statements that will assign\n");
    printf ("the perception condition given a specific value of sound_dB\n");
    printf ("(e.g. if sound_dB=73, the program will print the statement “73dB sound is\n");
    printf ("annoying to the public.”).)\n\n");
    printf("=============================================================================\n\n\n");
    
    int sound_dB, dec10;                                //sets the variables as integers
    
    printf("Enter the amount of decibels recorded: ");  //prints the text
    scanf("%d", &sound_dB);                             //scans for the users input and applies it to sound_dB
    
    dec10=sound_dB/10;                                  //divides the users input by 10 and assigns the value to dec10
    
    switch (dec10)                                      //sets the cases related to the variable dec10
    {
        case 0: case 1: case 2: case 3: case 4:                         //if dec10 is less than 4 then do the following
            printf("%ddB is quiet to the public\n", sound_dB);          //prints the users input and the text that follows
            break;                                                      //terminates the program
            
        case 5: case 6:
            printf("%ddB is intrusive to the public\n", sound_dB);
            break;
            
        case 7: case 8:
            printf("%ddB is annoying to the public\n", sound_dB);
            break;
            
        case 9: case 10:
            printf("%ddB is very annoying to the public\n", sound_dB);
            break;
            
        case 11: case 12:
            printf("%ddB is uncomfortable to the public\n", sound_dB);  
            break;
    }
    return 0;
}

