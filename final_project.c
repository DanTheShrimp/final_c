// DD, LC, RV & JD 7th Final Project, Tic tac Toe


#include <math.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>


// Fernando, print questions and variables

// Lindon, make board and double check/ fix bugs

// Daniel, print plays and figure out how to put symbols in squares computer turns

// Jesus, win conditions, if staments
int computerturn(void){
    srand(time(NULL));
    int compturn1 = rand() % 3 + 1;
    int compturn2 = rand() % 3 + 1;

    return 0;
}
int playerturn(void){
    char board[3][3]={{' ',' ',' '},
                {' ',' ',' '},
                {' ',' ',' '}};
    int move1;
    int move2;
    while (TRUE){
        printf("Which row would you like to go (BTW you are X) \n");
        scanf("%d", &move1);
        printf("Which column would you like to go (BTW you are X) \n");
        scanf("%d", &move2);
        if (board[move1][move2] == ' '){
            board[move1][move2] = 'X';
            printf(" %c|%c|%c\n", board[1][1], board[1][2], board[1][3]);
            printf(" %c|%c|%c\n", board[2][1], board[2][2], board[2][3]);
            printf(" %c|%c|%c\n", board[3][1], board[3][2], board[3][3]);
            break;
        }
        
    }
    return 0;
}


int main(void){
    int player = 0;
    int computer = 0;
    printf("-----Tick Tack Toe-----\n");
    printf("Hello, what are your initials (Two letters): \n");
    scanf("%s", &player);
    playerturn();
    
    if (player == 1){
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