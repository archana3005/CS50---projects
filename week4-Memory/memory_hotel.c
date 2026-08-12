#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char guest_name[20] ; //name of the guest
    char *rloc; //room location
    int rooms; // number of rooms
} booking;
booking guest[10] ;

char *hotelroom_allocation(int room) ;
int check_in(char *name, char *l, int room) ;
void check_out(int num) ;


int main(void)
{
    char user;
    for (int i = 0; i < 10; i++) {
            guest[i].rloc = NULL;
        }
    do
    {

        printf("Welcome to Hotel mémoire, Please state your name and number of rooms!\n") ;
        //input name
        char name[20];
        printf("name: ") ;
        fgets(name, sizeof(name),stdin);

        //input room
        int room;
        printf("rooms: ") ;
        scanf(" %i", &room) ;

        //room allocation
        char *location = hotelroom_allocation(room) ;
        if (location == NULL)
        {
            return 1 ;
        }

        int num = check_in(name, location, room );

        FILE *reg = fopen("hotelreg.csv","a") ;
        if (reg == NULL){
            printf("File has an issue!\n");
            return 1;
        }

        if (num != -1)
        {
            printf("Très bien! you are allocated %i rooms at location %p and your registration number is %i \n", room,location,num) ;
            fprintf(reg, "%s, %p, %i, %i\n", name, location , room, num) ;
        }
        else if(num == -1)
        {
            printf("Uh Oh, the rooms are full. please return later if the room is empty\n") ;
        }


        // evacuation using check_out function

        if (num != -1)
        {
            char input ;
            printf("Do you wish to evacuate?(y/n): \n") ;
            scanf(" %c", &input) ;
            if (input == 'y')
            {
                check_out(num) ;
                printf("Thank you for your stay!\n") ;
            }
            else
            {
                printf("Please continue to enjoy your stay!\n") ;
            }
        }
        fclose(reg) ;
        printf("Do you(the registrar) wish to quit?(y/n): \n") ;
        scanf(" %c", &user) ;
        while (getchar() != '\n');



    }

    while (user != 'y' ) ;

    // free all the memory used in malloc of people that are not evacuated
    for (int i = 0; i < 10; i++)
    {
        free(guest[i].rloc) ;
    }

    return 0 ;

}

// room allocation
char *hotelroom_allocation(int room)
{
    char *loc = malloc(room) ;

    if (loc == NULL)
    {
        return NULL ;
    }

    return loc ;
}



//check_in function
int check_in(char *name, char *l, int room)
{
    for (int i = 0; i < 10 ; i++)
    {
        if (guest[i].rloc == NULL)
        {
            strcpy(guest[i].guest_name, name) ;
            guest[i].rloc = l ;
            guest[i].rooms = room ;
            return i;
        }

    }
    return -1 ;

}

// check_out function
void check_out(int num)
{
    free(guest[num].rloc) ;
    guest[num].rloc = NULL ;
}

