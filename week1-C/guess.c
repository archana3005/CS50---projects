#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    srand(time(NULL)) ;
    // range between 1 and 100
    int max_n = 100 ;

    // using rand() function
    int g = (rand() % max_n) + 1 ;

    // user input
    int user;

    int guess_n = 0 ;


    do
    {
        user = get_int("Guess the number between [1 - 100] : " ) ;
        guess_n ++ ;

        if (user < g)
        {
            printf("your answer is lower than my guess )-:\n") ;

        }
        else if (user > g)
        {
            printf("your answer is higher than my guess )-:\n") ;

        }

        else
        {
            printf("wohoo, congratuations! %i is the correct number (-:\n" , user) ;
            printf("Your total guess is %i\n", guess_n ) ;

        }

    }

    while(user!=g);


}

