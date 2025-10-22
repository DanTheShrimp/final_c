// DD, LC, RV & JD 7th Final Project, Tic tac Toe


#include <math.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>


// Fernando, print questions and emotional support

// Lindon, make board and double check/ fix bugs

// Daniel, print plays and figure out how to put symbols in squares computer turns

// Jesus, win conditions, if staments

char board(void){
    char board1[50] = {
        "   |   |   \n"
        "   |   |   "
    };
    char board2[50] = {
        "   |   |   \n"
        "   |   |   "
    };
    char board3[50] = {
        "   |   |   \n"
        "   |   |   "
    };
    char divider[50] = {
        "-----------"
    };
    printf("%s\n%s\n%s\n%s\n%s\n", board1, divider, board2, divider, board3);
}



int main(void){
    char board[3][3]={{' ',' ',' '},
                {' ',' ',' '},
                {' ',' ',' '}};
    int player1 = 0;
    char player[2];
    int computer = 0;
    int move1;
    int move2;
    printf("-----Tick Tack Toe-----\n");
    printf("Hello, what are your initials (Two letters): \n");
    scanf("%s", &player);
    printf("Which row would you like to go? \n");
    scanf("%s", &move1);
    printf("Which column would you like to go? \n");
    scanf("%s", &move2);
    board[move1][move2]={{' ',' ',' '},
                {' ',' ',' '},
                {' ',' ',' '}};
    srand(time(NULL));
    if (player1 == 1){
        printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
        printf("|                                   |\n");
        printf("|                                   |\n");
        printf("|                                   |\n");
        printf("|                                   |\n");
        printf("|                                   |\n");
        printf("|              %s wins!             |\n", player);
        printf("|                                   |\n");
        printf("|                                   |\n");
        printf("|                                   |\n");
        printf("|                                   |\n");
        printf("|                                   |\n");
        printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");

    }else if (computer == 1){
        printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
        printf("|                                   |\n");
        printf("|                                   |\n");
        printf("|                                   |\n");
        printf("|                                   |\n");
        printf("|                                   |\n");
        printf("|           Computer wins!          |\n");
        printf("|                                   |\n");
        printf("|                                   |\n");
        printf("|                                   |\n");
        printf("|                                   |\n");
        printf("|                                   |\n");
        printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");

    }

    
    return 0;
}