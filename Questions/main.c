//
//  main.c
//  Questions
//
//  Created by Aidan Law on 24/04/2014.
//  Copyright (c) 2014 Aidan Law. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("|===============================================================================|\n");
    printf("|                                                                               |\n");
    printf("|The following program will give you the answer to the question you request for:|\n");
    printf("|                                                                               |\n");
    printf("|   Midsemester Exam                                                            |\n");
    printf("|   Semester 1                                                                  |\n");
    printf("|   2008                                                                        |\n");
    printf("|                                                                               |\n");
    printf("|===============================================================================|\n");
    printf("|                                                                               |\n");
    printf("|   Menu                                                                        |\n");
    printf("|                                                                               |\n");
    printf("|    Input a question number to print answer                                    |\n");
    printf("|    Input 15 for a full printout of answers                                    |\n");
    printf("|    Input 0 to terminate the program                                           |\n");
    printf("|                                                                               |\n");
    

    float question;
    char qseven [11]= {'"', '%', 'c', ' ', '%', 'd', ' ', '%', 'f', '"', '\0'};
    char qeight [8]= {'"', '%', 'd', ' ', '%', 'f', '"', '\0'};
    char apo [2]= {'"', '\0'};
    char bac [2]= {'\\', '\0'};
    
    do
    {
        printf("|===============================================================================|\n\n");
        printf("Enter a number: ");
        scanf("%f", &question);
    
    
        if (question==0)
        {
            printf("\nTERMINATING PROGRAM NOW\n");
        }
        
        else if (question==1)
        {
            printf("\nQuestion 1\n\n");
            printf("State five examples of real life variables that are best represented by integers\n\n");
            printf("   Hours\n   Days\n   Years\n   Number of people in a room\n   Number of cars in a carpark\n\n");
        }
        
        else if (question==2)
        {
            printf("\nQuestion 2\n\n");
            printf("State five examples of real life variables that are best represented by floating point numbers \n\n");
            printf("   Temperature\n   Width\n   Height\n   Length\n   Voltage\n   Current\n\n");

        }
        else if (question==3)
        {
            printf("\nQuestion 3\n\n");
            printf("State five examples of real life variables that are best represented by a string\n\n");
            printf("   First name\n   Family name\n   Course\n   TV Program\n   Computer Name\n\n");

        }
        else if (question==4)
        {
            printf("\nQuestion 4\n\n");
            printf("Why would you use double precision data type instead of floating point data type?\n\n");
            printf("   Where more accuracy of the results is required or where bigger numbers are needed\n\n");

        }
        else if (question==5)
        {
            printf("\nQuestion 5\n\n");
            printf("What would be the best type of variable to use in order to store a number of student marks in a program?\n\n");
            printf("   A one dimensional array:\n     int marks[100]\n     float marks[100]\n\n");

        }
        else if (question==6)
        {
            printf("\nQuestion 6\n\n");
            printf("What would be the best type of variable to store the height above sea level\nof the land given that each value is defined by its (x,y) coordinates\n\n");
            printf("   Two dimensional array:\n     int height[1000][1000]\n     float height[1000][1000]\n\n");

        }
        else if (question==7)
        {
            printf("\nQuestion 7\n\n");
            printf("Give the statement(s) to print out a\n\n");
            printf("_______________________________\n");
            printf("|character:             ans   |\n");
            printf("|integer:               age   |\n");
            printf("|floating point number: weight|\n");
            printf("|_____________________________|\n\n");
            printf("   printf (");
            printf("%s", qseven);
            printf("), ans, age, weight);\n\n");

        }
        else if (question==8)
        {
            printf("\nQuestion 8\n\n");
            printf("Give the statement(s) to read the following input from the keyboard:\n\n");
            printf("_______________________________\n");
            printf("|integer:               day   |\n");
            printf("|floating point number: mass  |\n");
            printf("|_____________________________|\n\n");
            printf("   scanf (");
            printf("%s", qeight);
            printf(", &day, &mass);\n\n");

        }
        else if (question==9)
        {
            printf("\nQuestion 9\n\n");
            printf("What is the result of the following code? i.e. what is the value of x\n\n");
            printf("   int x;\n   float y = 5.53;\n   x = y /2;\n\n");
            printf("     2\n\n   Even though half of 5.53 is 2.765, the fact that\n   x variable type = int\n   and only whole numbers can be used for int\n   the number is truncated so there is no remainders\n   e.g. int 3.14 removes the |.14| and becomes 3\n");

        }
        else if (question==10)
        {
            printf("\nQuestion 10\n\n");
            printf("What is the value of z given the following variable values and expression\n\n");
            printf("   _____________________________\n");
            printf("   |  float x = 3.1;           |\n");
            printf("   |  float y = 5.2;           |\n");
            printf("   |  int a = 10;              |\n");
            printf("   |  int b = 20;              |\n");
            printf("   |  float z;                 |\n");
            printf("   |                           |\n");
            printf("   |  z = x + y/2 – a + b++;   |\n");
            printf("   |___________________________|\n\n");
            printf("     15.7\n\n");
            printf("   As 3.2 + 5.2/2 = 5.7\n");
            printf("   5.7 - 10 + 20 = 15.7\n\n");
            printf("   The b++ statement suggests that b = 21 after the arithmetic has completed\n");
            printf("   If the program was looped once more than the answer would be 16.7\n\n");
            

        }
        else if (question==11)
        {
            printf("\nQuestion 11\n\n");
            printf("Why is it a good idea to incrementally build the C code for a program\nstarting with an empty main()?\n\n");
            printf("   Main point allows you to determine compiler errors and warnings as you \n   add each piece of code to the program.  You catch errors and warnings early. \n   This makes it easier to remove them.\n\n");
        }
        else if (question==12)
        {
            printf("\nQuestion 12\n\n");
            printf("Write the if statement to execute a statement only when the floating point \nvariable x is between 25.0 and 56.0 inclusive and the value of the integer \nvariable y is not 0\n\n");
            printf("   ____________________________________________\n");
            printf("   |                                          |\n");
            printf("   |   if ((x>=25.0) && (x<=56.0) && (y!=0))  |\n");
            printf("   |   {                                      |\n");
            printf("   |         //execute statement              |\n");
            printf("   |   }                                      |\n");
            printf("   |__________________________________________|\n\n");
            printf("   && suggests that the input must fit all the criteria given\n");
            printf("   || suggests that the input must fit only one of the set criteria\n\n");
            

        }
        else if (question==13)
        {
            printf("\nQuestion 13\n\n");
            printf("Under what circumstances would you use a switch/case statement instead of\nif...elseif...else\n\n");
            printf("   If there was a large number of of alternative choices.\n   For example, a grade conversion to a letter grade\n\n");
            printf("     Example\n\n");
            printf("     _____________________________________________________________\n");
            printf("     |                                                           |\n");
            printf("     |   switch(marks)                                           |\n");
            printf("     |   {                                                       |\n");
            printf("     |      case 0: case 1: case 2: case 3: case 4:              |\n");
            printf("     |         printf(");
            printf("%s", apo);
            printf("Fail");
            printf("%s", bac);
            printf("n");
            printf("%s", apo);
            printf(");                                 |\n");
            printf("     |         break;                                            |\n");
            printf("     |                                                           |\n");
            printf("     |     case 5:                                               |\n");
            printf("     |         printf(");
            printf("%s", apo);
            printf("Pass");
            printf("%s", bac);
            printf("n");
            printf("%s", apo);
            printf(");                                 |\n");
            printf("     |         break;                                            |\n");
            printf("     |                                                           |\n");
            printf("     |     ...                                                   |\n");
            printf("     |                                                           |\n");
            printf("     |     case 9:                                               |\n");
            printf("     |         printf(");
            printf("%s", apo);
            printf("High Distinction");
            printf("%s", bac);
            printf("n");
            printf("%s", apo);
            printf(");                     |\n");
            printf("     |         break;                                            |\n");
            printf("     |   }                                                       |\n");
            printf("     |___________________________________________________________|\n\n");
            
        }
        else if (question==14)
        {
            printf("\nQuestion 14\n\n");
            printf("Write a complete C program to read in two floating point values representing\nthe external and internal radii of a spherical ball. Compute and output the \nvolume of the material in the ball. The equation for the volume of a sphere is\n\n");
            printf("   4\n");
            printf("  --- PI x R^3\n");
            printf("   3\n\n");
            printf("This can be found under the folder >Question 14 within the same folder sub-structure\n\n");
        }
        else if (question==15)
        {
            printf("\n-----------");
            printf("\nQuestion 1\n\n");
            printf("State five examples of real life variables that are best represented by integers\n");
            printf("   Hours\n   Days\n   Years\n   Number of people in a room\n   Number of cars in a carpark\n\n");
            printf("-----------");
            
            printf("\nQuestion 2\n\n");
            printf("State five examples of real life variables that are best represented by floating point numbers \n");
            printf("   Temperature\n   Width\n   Height\n   Length\n   Voltage\n   Current\n\n");
            printf("-----------");
            
            printf("\nQuestion 3\n\n");
            printf("State five examples of real life variables that are best represented by a string\n");
            printf("   First name\n   Family name\n   Course\n   TV Program\n   Computer Name\n\n");
            printf("-----------");
            
            printf("\nQuestion 4\n\n");
            printf("Why would you use double precision data type instead of floating point data type?\n");
            printf("   Where more accuracy of the results is required or where bigger numbers are needed\n\n");
            printf("-----------");
            
            printf("\nQuestion 5\n\n");
            printf("What would be the best type of variable to use in order to store a number of student marks in a program?\n");
            printf("   A one dimensional array:\n     int marks[100]\n     float marks[100]\n\n");
            printf("-----------");
            
            printf("\nQuestion 6\n\n");
            printf("What would be the best type of variable to store the height above sea level\nof the land given that each value is defined by its (x,y) coordinates\n");
            printf("   Two dimensional array:\n     int height[1000][1000]\n     float height[1000][1000]\n\n");
            printf("-----------");
            
            printf("\nQuestion 7\n\n");
            printf("Give the statement(s) to print out a\n");
            printf("_______________________________\n");
            printf("|character:             ans   |\n");
            printf("|integer:               age   |\n");
            printf("|floating point number: weight|\n");
            printf("|_____________________________|\n\n");
            printf("   printf (");
            printf("%s", qseven);
            printf("), ans, age, weight);\n\n");
            printf("-----------");
            
            printf("\nQuestion 8\n\n");
            printf("Give the statement(s) to read the following input from the keyboard:\n");
            printf("_______________________________\n");
            printf("|integer:               day   |\n");
            printf("|floating point number: mass  |\n");
            printf("|_____________________________|\n\n");
            printf("   scanf (");
            printf("%s", qeight);
            printf(", &day, &mass);\n\n");
            printf("-----------");
            
            printf("\nQuestion 9\n\n");
            printf("What is the result of the following code? i.e. what is the value of x\n\n");
            printf("   int x;\n   float y = 5.53;\n   x = y /2;\n\n");
            printf("     2\n\n   Even though half of 5.53 is 2.765, the fact that\n   x variable type = int\n   and only whole numbers can be used for int\n   the number is truncated so there is no remainders\n   e.g. int 3.14 removes the |.14| and becomes 3\n");
            printf("-----------");
            
            printf("\nQuestion 10\n\n");
            printf("What is the value of z given the following variable values and expression\n");
            printf("   _____________________________\n");
            printf("   |  float x = 3.1;           |\n");
            printf("   |  float y = 5.2;           |\n");
            printf("   |  int a = 10;              |\n");
            printf("   |  int b = 20;              |\n");
            printf("   |  float z;                 |\n");
            printf("   |                           |\n");
            printf("   |  z = x + y/2 – a + b++;   |\n");
            printf("   |___________________________|\n\n");
            printf("     15.7\n\n");
            printf("   As 3.2 + 5.2/2 = 5.7\n");
            printf("   5.7 - 10 + 20 = 15.7\n\n");
            printf("   The b++ statement suggests that b = 21 after the arithmetic has completed\n");
            printf("   If the program was looped once more than the answer would be 16.7\n\n");
            printf("-----------");
            
            printf("\nQuestion 11\n\n");
            printf("Why is it a good idea to incrementally build the C code for a program\nstarting with an empty main()?\n\n");
            printf("   Main point allows you to determine compiler errors and warnings as you \n   add each piece of code to the program.  You catch errors and warnings early. \n   This makes it easier to remove them.\n\n");
            printf("-----------");
            
            printf("\nQuestion 13\n\n");
            printf("Under what circumstances would you use a switch/case statement instead of\nif...elseif...else\n\n");
            printf("   If there was a large number of of alternative choices.\n   For example, a grade conversion to a letter grade\n\n");
            printf("     Example\n\n");
            printf("     _____________________________________________________________\n");
            printf("     |                                                           |\n");
            printf("     |   switch(marks)                                           |\n");
            printf("     |   {                                                       |\n");
            printf("     |      case 0: case 1: case 2: case 3: case 4:              |\n");
            printf("     |         printf(");
            printf("%s", apo);
            printf("Fail");
            printf("%s", bac);
            printf("n");
            printf("%s", apo);
            printf(");                                 |\n");
            printf("     |         break;                                            |\n");
            printf("     |                                                           |\n");
            printf("     |     case 5:                                               |\n");
            printf("     |         printf(");
            printf("%s", apo);
            printf("Pass");
            printf("%s", bac);
            printf("n");
            printf("%s", apo);
            printf(");                                 |\n");
            printf("     |         break;                                            |\n");
            printf("     |                                                           |\n");
            printf("     |     ...                                                   |\n");
            printf("     |                                                           |\n");
            printf("     |     case 9:                                               |\n");
            printf("     |         printf(");
            printf("%s", apo);
            printf("High Distinction");
            printf("%s", bac);
            printf("n");
            printf("%s", apo);
            printf(");                     |\n");
            printf("     |         break;                                            |\n");
            printf("     |   }                                                       |\n");
            printf("     |___________________________________________________________|\n\n");
            printf("-----------");
            
            printf("\nQuestion 14\n\n");
            printf("Write a complete C program to read in two floating point values representing\nthe external and internal radii of a spherical ball. Compute and output the \nvolume of the material in the ball. The equation for the volume of a sphere is\n\n");
            printf("   4\n");
            printf("  --- PI x R^3\n");
            printf("   3\n\n");
            printf("This can be found under the folder >Question 14 within the same folder sub-structure\n\n");
            
            }
        
        else
        {
            printf("\n%f is not a valid input\n\n", question);
            printf("|===============================================================================|\n");
            printf("|                                                                               |\n");
            printf("|The following program will give you the answer to the question you request for:|\n");
            printf("|                                                                               |\n");
            printf("|   Midsemester Exam                                                            |\n");
            printf("|   Semester 1                                                                  |\n");
            printf("|   2008                                                                        |\n");
            printf("|                                                                               |\n");
            printf("|===============================================================================|\n");
            printf("|                                                                               |\n");
            printf("|   Menu                                                                        |\n");
            printf("|                                                                               |\n");
            printf("|    Input a question number to print answer                                    |\n");
            printf("|    Input 15 for a full printout of answers                                    |\n");
            printf("|    Input 0 to terminate the program                                           |\n");
            printf("|                                                                               |\n");
        }
        
    }
    while (question!=0);
    return 0;
}

