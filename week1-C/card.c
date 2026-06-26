#include <stdio.h>
#include <math.h>
#include <cs50.h>


// main function
int main(void)
{
    // variable definition
    long card = get_long("Please type your credit card number to validate:") ;
    long temp = card ;
    int counter = 0 ;
    int sum1 = 0;
    int sum2 = 0;
    // implementing Luhn's algorithm
    while (temp > 0)
    {
        int digit = temp%10 ;
        if (counter%2 == 1)
        {
            digit *= 2;

            if (digit>9)
            {
                digit-= 9 ;
            }
            sum1 += digit ;
        }
        else
        {
            sum2 += digit;
        }
        temp /= 10 ;
        counter ++ ;
    }


    int total = sum1 + sum2 ;
    // completed Luhn algorithm

    // valid / invalidity and credit card identification based on Luhn's algorithm
    if (total % 10 == 0)
    {
        printf("VALID\n") ;

        int digits = counter ;

        long one = card ;  // first digit extraction
        while ( one >= 10)
        {
            one /= 10 ;
        }

        long two = card ; // first two digit extraction
        while (two >= 100)
        {
            two /= 10 ;
        }


        if ((digits == 15) && (two == 34 || two == 37))
        {
            printf("It is an Amex card\n") ;
        }

        else if ((digits == 16) && ( two == 51 || two == 52 || two == 53 || two == 54 || two == 55))
        {
            printf("It is a mastercard\n") ;
        }
        else if((digits == 13 || digits == 16) && (one == 4))
        {
            printf("It is a Visa\n") ;
        }


    }
    else
    {
        printf("INVALID\n") ;
    }

}



