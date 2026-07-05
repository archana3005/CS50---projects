#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// function declaration

char plugboard(char c, string pair[]) ;
char r1(char c, char r1[],int offset) ;
char r2(char c, char r2[],int offset) ;
char r3(char c, char r3[],int offset) ;
char ref(char c, char ref[]) ;
char r1_b(char c,char r1_b[],int offset) ;
char r2_b(char c, char r2_b[],int offset) ;
char r3_b(char c, char r3_b[],int offset) ;

// main function

int main(void)
{
    //controlled version so plugboard pairs are given
    string pair[] = {"AZ", "BY", "CX", "DW", "EV", "FU", "GT", "HS", "IR", "JQ", "KP", "LO", "MN"} ;
    char rotor1[] = "EKMFLGDQVZNTOWYHXUSPAIBRCJ" ;
    char rotor2[] = "AJDKSIRUXBLHWTMCQGZNPYFVOE" ;
    char rotor3[] = "BDFHJLCPRTXVZNYEIWGAKMUSQO" ;
    char reflector[] = "YRUHQSLDPXNGOKMIEBFZCWVJAT" ;
    string message = get_string("Enter a message:") ;
    int offset[] = {0,0,0} ;



    for (int i = 0; i < strlen(message); i++)
    {
        // forward rotor
        // step - 1 : pluboard implementation
        message[i] = plugboard(message[i], pair) ;
        // step - 2 : rotor_1 implementation
        message[i] = r1(message[i],rotor1,offset[0]) ;
        // step - 3 : rotor_2 implementation
        message[i] = r2(message[i],rotor2,offset[1]) ;
        // step - 4 : rotor_3 implementation
        message[i] = r3(message[i],rotor3,offset[2]) ;
        // step - 5 : reflector implementation
        message[i] = ref(message[i],reflector) ;
        // backward rotor
        // step - 6 : rotor_3 backward implementation
        message[i] = r3_b(message[i],rotor3,offset[2]) ;
        // step - 7 : rotor_2 backward implementation
        message[i] = r2_b(message[i],rotor2,offset[1]) ;
        // step - 7 : rotor_1 backward implementation
        message[i] = r1_b(message[i],rotor1,offset[0]) ;
        // step - 8 : plugboard implementation[again]
        message[i] = plugboard(message[i], pair) ;

        // offset code
        offset[0]++ ;
        if (offset[0] == 26)
        {
            offset[0] = 0;
            offset[1]++;
        }
        if (offset[1] == 26)
        {
            offset[1] = 0;
            offset[2]++;
        }
        if (offset[2] == 26)
        {
            offset[2] = 0;
        }

    }
    printf("message ahoy : %s\n", message) ;




}


char plugboard(char c, string pair[])
{
    for (int j = 0; j < 13; j++)
    {
        if (isalpha(c))
        {
            if (pair[j][0] == c)
            {
                c = pair[j][1] ;
                break ;
            }
            else if (pair[j][1] == c)
            {
                c = pair[j][0] ;
                break ;
            }

        }


    }
    return c ;



}
//r1
char r1(char c, char r1[],int offset)
{
    if (isalpha(c))
    {
        int pos = (toupper(c) - 'A' + offset) % 26;
        if (islower(c))
        {
            c = tolower(r1[pos]) ;
        }
        else
        {
            c = toupper(r1[pos]) ;
        }

    }
    return c ;

}
//r2
char r2(char c, char r2[],int offset)
{
    if (isalpha(c))
    {
        int pos = (toupper(c) - 'A' + offset) % 26;
        if (islower(c))
        {
            c = tolower(r2[pos]) ;
        }
        else
        {
            c = toupper(r2[pos]) ;
        }

    }
    return c ;

}
//r3
char r3(char c, char r3[],int offset )
{
    if (isalpha(c))
    {
        int pos = (toupper(c) - 'A' + offset) % 26;
        if (islower(c))
        {
            c = tolower(r3[pos]) ;
        }
        else
        {
            c = toupper(r3[pos]) ;
        }

    }
    return c ;

}
//reflector
char ref(char c, char ref[])
{
    if (isalpha(c))
    {
        int pos = (toupper(c)) - 'A' ;
        if (islower(c))
        {
            c = tolower(ref[pos]) ;
        }
        else
        {
            c = toupper(ref[pos]) ;
        }

    }
    return c ;

}
//rotator1_backward
char r1_b(char c,char r1_b[],int offset)
{
    if (isalpha(c))
    {
        char target = toupper(c) ;
        for (int j = 0;  j<26; j++)
        {
            if (toupper(r1_b[j]) == target)
            //finding position using the letter
            {
                if (islower(c))
                {
                    c = 'a' + (j - offset + 26) % 26;
                }
                else
                {
                     c = 'A' + (j - offset + 26) % 26;
                }
                break;
            }
        }
    }
    return c ;

}
//rotator2_backward
char r2_b(char c,char r2_b[],int offset)
{
    if (isalpha(c))
    {
        char target = toupper(c) ;
        for (int j = 0;  j<26; j++)
        {
            if (toupper(r2_b[j]) == target)
            //finding position using the letter
            {
                if (islower(c))
                {
                    c = 'a' + (j - offset + 26) % 26;
                }
                else
                {
                    c = 'A' + (j - offset + 26) % 26;
                }
                break;
            }
        }
    }
    return c ;

}
//rotator3_backward
char r3_b(char c, char r3_b[],int offset)
{
    if (isalpha(c))
    {
        char target = toupper(c) ;
        for (int j = 0;  j<26; j++)
        {
            if (toupper(r3_b[j]) == target)
            //finding position using the letter
            {
                if (islower(c))
                {
                    c = 'a' + (j - offset + 26) % 26;
                }
                else
                {
                     c = 'A' + (j - offset + 26) % 26;
                }
                break;
            }
        }
    }
    return c ;

}



