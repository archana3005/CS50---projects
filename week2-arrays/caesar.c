#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// function definitions
char encrypt(char c, int key) ;
char decrypt(char c, int key) ;
//main function
int main(void)
{

    char user_again = 'y' ;
    //do while loop so that the user can do it again and again

    do
    {
        // user def
        char choose = get_char("Choose encryption(e) or decryption(d): ") ;
        int key = get_int("Choose key[1-25]:  ") ;
        string message = get_string("Message : ") ;
        //conditionals
        if ((choose == 'e') || (choose == 'E'))
        {

            for (int i = 0; i < strlen(message);i++)
            {
                message[i] = encrypt(message[i],key) ;
            }
            printf("Encrypted message : %s\n",message) ;
            user_again = get_char("Do you want to go again?(y/n):");
        }
        else if ((choose == 'd') || (choose == 'D'))
        {
            for (int i = 0; i<strlen(message);i++)
            {
                message[i] = decrypt(message[i],key) ;
            }
            printf("Decrypted message : %s\n",message) ;
            user_again = get_char("Do you want to go again?(y/n):");
        }
        else
        {
            printf("Uh Oh somethings wrong!") ;
            user_again = get_char("Do you want to go again?(y/n):");

        }
    }
    while (user_again == 'y' || user_again == 'Y') ;
    printf("Goodbye!\n");
    return 0 ;




}








char encrypt(char c, int key)
{
    if (isalpha(c))
    {
        if (islower(c))
        {
            c = 'a' + (c- 'a' + key) % 26;
        }
        if (isupper(c))
        {
            c = 'A' + (c - 'A' + key) % 26 ;
        }
    }
    return c ;
}

char decrypt(char c, int key)
{
    if (isalpha(c))
    {
        if (islower(c))
        {
            c = 'a' + (c - 'a' - key + 26) % 26 ;
        }
        if (isupper(c))
        {
            c = 'A' + (c - 'A' - key + 26) % 26 ;
        }

    }
    return c ;
}


