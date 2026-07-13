#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// function declaration

void bubble_sort(int n[], int size) ;

// main function

int main(void)
{
    srand(time(NULL)) ;
    int user = get_int("Number of Values : ") ;

    int numbers[user];
    for (int i = 0; i <user; i++)
    {
        numbers[i] = (rand() % user) + 1 ;

    }

    int target = get_int("Your Number: ") ;

    //linear search (simplest version)

    int found  = 0 ;
    int step_l = 0 ;
    for (int i = 0; i<user; i++)
    {
        if (numbers[i] == target)
        {
            printf("Linear : Found! the number of steps are %i\n",step_l) ;
            found = 1 ;
            break ;

        }
        step_l ++ ;

    }
    if (found == 0)
    {
        printf("Linear : Not found! the number of steps are %i\n", step_l) ;
    }

    // binary search

    int low = 0 ;
    int high = user - 1 ;
    int step_b = 0;
    int m ;
    bubble_sort(numbers, user) ;

    while (low<=high)
    {
        m = (low+high)/2 ;
        step_b++ ;
        if (numbers[m] == target)
        {
            printf("Binary : Found! the number of steps are %i\n", step_b) ;
            break ;
        }

        else if(numbers[m] < target)
        {
            low = m + 1 ;
        }

        else if(numbers[m] > target)
        {
            high = m - 1 ;
        }

    }
    if (numbers[m] != target)
    {
        printf("Binary : Not Found! the number of steps are %i\n", step_b) ;
    }





}







void bubble_sort(int n[], int size)
{
    for (int i =0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (n[j] > n[j+1])
            {
                int temp = n[j];
                n[j]=n[j+1] ;
                n[j+1] = temp ;
            }
        }
    }

}




