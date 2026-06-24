#include <stdio.h>
#include <cs50.h>

// functions
void l_pyramid(int height);
void r_pyramid(int height);
void d_pyramid(int height);

// main function
int main(void)
{
    // user and height variables defined
    char user = get_char("Choose double(d), left(l) or right(r) : ");
    int height = get_int("Input a height(1-8):  ");

    // user choice condiitonals

    if (user == 'r')

    {
        r_pyramid(height) ;

    }

    else if (user == 'l' )
    {
        l_pyramid(height) ;


    }

    else
    {
        d_pyramid(height) ;
    }

    // end of coniditonals
    // end of main functions

}

// function definitions below

















void l_pyramid(int height)
{
        for (int row = 0; row < height ; row++)
        {
            for (int space = 0; space < height - row-1; space++)
            {
                printf(" ");
            }
             for (int ir = 0; ir < row ; ir++)
             {
                printf("#");
             }
             printf("#\n");
        }

}

void r_pyramid(int height)
{
    for (int row = 0; row < height ; row++)
    {
        for (int ir = 0; ir < row ; ir++)
        {
            printf("#");
        }
        printf("#\n");
    }


}

void d_pyramid(int height)
{
    for (int row = 0; row < height ; row++)
    {
        for (int space = 0; space < height - row-1; space++)
        {
            printf(" ");
        }
        for (int ir = 0; ir < row ; ir++)
        {
            printf("#");
        }
        printf("#");

        printf("   ");
        for (int ir = 0; ir < row ; ir++)
        {
            printf("#");
        }
        printf("#\n");


    }
}

//end of the code <3






