#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cs50.h>


int gcd(int pn, int pd) ;
void gcd_op(int pn,int pd) ;

int main(void)

{
    // user input variables
    int n1 = get_int("Enter numerator of fraction 1 : ") ;
    int d1 = get_int("Enter denominator of fraction 1 : ") ;
    int n2 = get_int("Enter numerator of fraction 2 : ") ;
    int d2 = get_int("Enter denominator of fraction 2 : ") ;

    // user operation choosing
    char op = get_char("Choose your operation[+,-,*,/] : ") ;

    if (op == '+')
    {
        int pn = (n1 * d2) + (n2 * d1) ;
        int pd = (d1 * d2) ;
        printf("%i/%i\n",pn,pd) ;

        gcd_op(pn, pd) ;

    }

    else if (op == '-')
    {
        int pn = (n1 * d2) - (n2 * d1) ;
        int pd = (d1 * d2) ;
        printf("%i/%i\n",pn,pd) ;

        gcd_op(pn, pd) ;


    }

    else if (op == '*')
    {
        int pn = (n1*n2) ;
        int pd = (d1 *d2) ;
        printf("%i/%i\n",pn,pd) ;

        gcd_op(pn, pd) ;

    }

    else if (op == '/')
    {
        int pn = (n1 * d2)  ;
        int pd = (n2 * d1) ;
        printf("%i/%i\n",pn,pd) ;

        gcd_op(pn, pd) ;


    }

    else
    {
        printf("Invalid Operation:Try again\n") ;
    }

}

int gcd(int pn, int pd)
{
    int n = abs(pn) ;
    int d = abs(pd) ;
    do
    {
        int r = n%d ;
        int q = n ;
        if (r != 0)
        {
            n = d ;
            d = r ;
        }


    }
    while (n%d != 0) ;
    return d ;
}

void gcd_op(int pn,int pd)
{
    int g = gcd(pn, pd) ;
    int n_pn = pn/g ;
    int n_pd = pd/g ;
    if (n_pd < 0)
    {
        n_pn = -n_pn;
        n_pd = -n_pd;
    }
    printf("simplified version : %i/%i\n", n_pn,n_pd) ;

}
