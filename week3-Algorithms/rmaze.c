#include <cs50.h>
#include <stdio.h>

//function declaration

bool maze_solver(char maze[9][19],int row, int col) ;

//main function

int main(void)
{
    printf("The Maze :\n") ;
    char maze[9][19] =
    {
    "# # # # # # # # # #",
    "# S . . . . # . . #",
    "# # # # # . # # . #",
    "# . . . . . . # . #",
    "# . # # # # . . . #",
    "# . . . . # . # . #",
    "# # # # . # . # . #",
    "# . . . . . . . E #",
    "# # # # # # # # # #"
    } ;

    //printing the maze

    for (int r=0;r<9;r++)
    {
        for (int c=0; c<19;c++)
        {
            printf("%c",maze[r][c]) ;

        }
        printf("\n") ;
    }


    //solving the maze
    if (maze_solver(maze,1,4))
    {
        printf("Maze Solved\n") ;

        maze[1][2] = 'S' ;



        for (int r=0;r<9;r++)
        {
            for (int c=0; c<19;c++)
            {
                printf("%c",maze[r][c]) ;
            }
            printf("\n") ;
        }
    }
    else
    {
        printf("Uh Oh, Error!\n") ;
    }
}


//maze solver function

bool maze_solver(char maze[9][19], int row, int col)
{
    printf("Visiting: row=%i col=%i char='%c'\n", row, col, maze[row][col]);


    if (row < 0 || row >= 9 || col < 0 || col >= 19)
        return false;

    if (maze[row][col] == '#') return false;
    if (maze[row][col] == ' ') return false;
    if (maze[row][col] == '*') return false;
    if (maze[row][col] == 'E') return true;

    maze[row][col] = '*';

    if (maze_solver(maze, row-1, col)) return true;//top

    if (maze_solver(maze, row+1, col)) return true;//bottom
    if (maze_solver(maze, row, col-2)) return true;//left
    if (maze_solver(maze, row, col+2)) return true;//right

    maze[row][col] = '.';
    return false;
}


