#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//function definitions

char encrypt(char c, string key) ;
char decrypt(char c, string key) ;

//main function

int main(void)
{
    char choose = get_char("Choose encryption(e) or decryption(d): ") ;
    string key = get_string("key[26 letters]:  ") ;
    string message = get_string("Message : ") ;
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ" ;





    if ((choose == 'e') || (choose == 'E'))
    {
        for (int i = 0; i<strlen(message);i++)
        {
            message[i] = encrypt(message[i],key) ;
        }

        printf("Message: %s\n",message) ;

    }

    else if ((choose == 'd') || (choose == 'D'))
    {
        for (int i = 0; i < strlen(message); i++)
        {
            message[i] = decrypt(message[i],key) ;
        }
        printf("Message: %s\n",message);
    }
}











//functions


char encrypt(char c, string key)
{
    if (isalpha(c))
    {
        int pos = (toupper(c)) - 'A' ;
        if (islower(c))
        {
            c = tolower(key[pos]) ;
        }
        else
        {
            c = toupper(key[pos]) ;
        }

    }
    return c ;
}

char decrypt(char c, string key)
{
    if (isalpha(c))
    {
        char target = toupper(c) ;
        for (int j = 0;  j<26; j++)
        {
            if (toupper(key[j]) == target)
            //reverse of encryption where we are finding the position and using it to find the letter
            {
                if (islower(c))
                {
                    c = 'a' + j;
                }
                else
                {
                     c = 'A' + j;
                }
                break;
            }
        }
    }
    return c ;
}
