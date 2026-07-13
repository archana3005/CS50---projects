#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// function declaration

int selection(int n[], int size);
int bubble(int n[], int size);
int merger(int n[], int l, int h, int m);
int mergesort(int n[], int low, int high);

// main function
int main(void)
{
    // user induction and array
    srand(time(NULL)) ;
    int user = get_int("Number of Values : ") ;

    int array1[user] ;
    int array2[user] ;
    int array3[user] ;
    int numbers[user] ;
    for (int i = 0; i <user; i++)

    {
        // copy of numbers[i] so that each sorting can have the same values
        numbers[i] = (rand() % user) + 1 ;
        array1[i] = numbers[i] ;
        array2[i] = numbers[i] ;
        array3[i] = numbers[i] ;
    }

    int a = selection(array1,user) ;
    int b = bubble(array2, user) ;
    int c = mergesort(array3, 0, user - 1) ;

    printf("The number of steps taken by selection sort : %i\n", a) ;
    printf("The number of steps taken by bubble sort : %i\n", b) ;
    printf("The number of steps taken by merge sort : %i\n", c) ;


    // confirmation of the winner of the sortrace by comparing the steps

    if ((c < a) && (c < b))
    {
        printf("THE WINNER OF THE SORTRACE IS...<drumroll> MERGESORT with only %i steps\n", c) ;
    }
    else if ((b <a) && (b < c))
    {
        printf("THE WINNER OF THE SORTRACE IS...<drumroll> BUBBLESORT ..uhoh...something is wrong but the number of steps are %i \n",b ) ;
    }
    else
    {
        printf("THE WINNER OF THE SORTRACE IS...<drumroll> SELECTIONSORT ..uhoh...something is wrong but the number of steps are %i \n",a ) ;
    }


}





































// Function definitions


// selection sort

int selection(int n[], int size)
{
    int step_s = 0; // counter for the steps taken by selection sort
    for (int i = 0; i < size-1; i++)
    {
        int min = i;

        for (int j = i + 1; j < size; j++)
        {

            if (n[j] < n[min])
            {
                min = j;
            }
            step_s++ ;
        }
        int temp = n[i] ;
        n[i] = n[min] ;
        n[min] = temp ;


    }

    return step_s;
}

// bubble sort

int bubble(int n[], int size)
{
    int step_b = 0 ;
    for (int i = 0; i < size -1; i++)
    {
        for (int j = 0; j < size - 1 - i ; j++ )
        {
            if (n[j]>n[j+1])
            {
                int temp = n[j] ;
                n[j] = n[j+1] ;
                n[j+1] = temp ;
                step_b++ ;
            }
        }

    }
    return step_b ;

}

// merge sort

int merger(int n[],int l, int h, int m)
{
    int steps = 0 ;
    int left = m-l+1 ;
    int right = h-m ;

    // temporary positions


    int l_t[left] ;
    for (int i = 0; i < left; i++)
    {
        l_t[i] = n[i+l] ;
    }
    int r_t[right] ;
    for (int j = 0; j < right; j++)
    {
        r_t[j] = n[m+1+j] ;
    }

    int i = 0;
    int j = 0;
    int k = l;

    while(i<left && j<right)
    {
        if (l_t[i] <= r_t[j])
        {
            n[k] = l_t[i] ;
            i ++ ;
        }
        else if (l_t[i] > r_t[j])
        {
            n[k] = r_t[j] ;
            j ++ ;
        }
        k++;
        steps++;

    }

    while (i < left)
    {
        n[k] = l_t[i];
        i++;
        k++;
    }
    while (j < right)
    {
        n[k] = r_t[j];
        j++;
        k++;
    }

    return steps ;

}

int mergesort(int n[], int low, int high)
{
    int step_b = 0 ;
    // base case
    if (low>=high) return 0 ;

    int mid = (low+high) / 2 ;
    step_b += mergesort(n,low,mid) ; // left side
    step_b += mergesort(n,mid+1,high) ; // right side
    step_b += merger(n,low,high,mid) ;

    return step_b ;

}




