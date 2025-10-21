char board(void){
    int question;
    for(int i = 1; i < 4; i++){
        printf("    |    |    \n");
        printf("    |    |    \n");
        printf("----|----|----\n");
        while(TRUE){
            printf("Where would you like to go? Column number then Row number.\n");
            scanf("%d", &question);
            if (question == 1){
                
            }
        }
        
    }
}



int main(void){
    int player1 = 0;
    int player2 = 0;
    
    board();
    srand(time(NULL));
    // Lindon
    char x_symbol[50] = 
    "\\ /\n";
    "/ \\\n";
    char o_symbol[50] = 
    "/\\\n";
    "\\/\n";

    if (player1 == 1){
        printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
        printf("|                                   |\n");
        printf("|                                   |\n");
        printf("|                                   |\n");
        printf("|                                   |\n");
        printf("|                                   |\n");
        printf("|           Player 1 wins!          |\n");
        printf("|                                   |\n");
        printf("|                                   |\n");
        printf("|                                   |\n");
        printf("|                                   |\n");
        printf("|                                   |\n");
        printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
}
    
}



// If(player = X);
// else if (player = O);