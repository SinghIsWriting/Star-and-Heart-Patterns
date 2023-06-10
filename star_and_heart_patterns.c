/*
We are going to code the following Star Patterns:

Star Pattern - 1
   *
  **
 ***
****

Star Pattern - 2
   *
  ***
 *****
*******

Star Pattern - 3
****
 ***
  **
   *

Star Pattern - 4
****
*  *
*  *
****

Number Pattern
0000000
 111111
  22222
   3333
    444
     55
      6

Heart Pattern
   *      *
  ***    ***
 *****  *****
**************
 ************
  **********
   ********
    ******
     ****
      **
       *

*/

#include <stdio.h>

// Defining a function for star_pattern_1
void star_pattern_1(int num)
{
    int j;

    for (int i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {
            if (i + j >= num - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Defining a function for star_pattern_2
void star_pattern_2(int num)
{
    int j, m;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < 2 * num; j++)
        {
            if (j >= num - 1 - i && j <= num - 1 + i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Defining a function for star_pattern_3
void star_pattern_3(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (j >= i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for (int k = 0; k < num; k++)
        {
            if (i + k < num - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Defining a function for star_pattern_5
void star_pattern_4(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (i == 0 || i == num - 1 || j == 0 || j == num - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Defining a function for number_pattern
void number_pattern(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (j >= i)
            {
                printf("%d", i);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Defining a function for heart_pattern
void heart_pattern(int num)
{
    int j, m;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < 2 * num; j++)
        {
            if (j >= num - 1 - i && j <= num - 1 + i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for (int j = 0; j < 2 * num; j++)
        {
            if (j >= num - 1 - i && j <= num - 1 + i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    star_pattern_3(2 * num); // Using star_pattern_3 for reversed triangle in the heart_pattern
}

int main()
{
    // Declaring and initializing the number of lines in a patterns
    int num = 10;

    printf("\nStar pattern 1: \n");
    star_pattern_1(num); // Calling function star_pattern_1 to print first pattern

    printf("\nStar pattern 2: \n");
    star_pattern_2(num); // Calling function star_pattern_2 to print second pattern

    printf("\nStar pattern 3: \n");
    star_pattern_3(num); // Calling function star_pattern_3 to print third pattern

    printf("\nStar pattern 4: \n");
    star_pattern_4(num); // Calling function star_pattern_4 to print fourth pattern

    printf("\nNumber pattern: \n");
    number_pattern(num); // Calling function number_pattern to print number pattern

    printf("\nHeart Star pattern: \n");
    heart_pattern(num); // Calling function heart_pattern to print heart shape pattern

    return 0;
}