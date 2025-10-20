// DD LC RV JD 7th Final Project For CP
#include <math.h>
#include <stdio.h>
#include <string.h>

 // Lindon
char board(void){

    printf("    |    |    \n");
    printf("    |    |    \n");
    printf("----|----|----\n");
    printf("    |    |    \n");
    printf("    |    |    \n");
    printf("----|----|----\n");
    printf("    |    |    \n");
    printf("    |    |    \n");
}
// Lindon
char x_symbl(void){
    printf("\\ /\n"); 
    printf("/ \\\n");
}
char o_symbl(void){
    printf("/\\\n");
    printf("\\/\n");
}

// Fernando, print questions

// Lindon, fuctions

// Daniel, print fuctions

// Jesucristo, If staments



int main(void){
    char player_type;
    char x_symbol[50] = 
    "\\/\n"
    "/\\\n";
    char o_symbol[50] = 
    "/\\\n"
    "\\/\n";
    printf("Would you like to be X or O? ");
    scanf("%c", &player_type);
    printf("%c\n", player_type);
    printf("%s\n", x_symbol);
    printf("%s\n", o_symbol);

}


// If(player = X);
// else if (player = O);