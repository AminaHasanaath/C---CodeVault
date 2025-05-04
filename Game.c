/*10. TIC TAC TOE - The Manual Game!
developed by Amina Hasanaath*/
#include<stdio.h>
int game(int elem,int rowPos,int colPos,int Box[3][3]);
int move(int elem,int rowPos,int colPos,int Box[3][3]);
int Check(int elem,int rowPos,int colPos,int Box[3][3]);

int main(){
    int Box[3][3];
    int i,j,rowPos = 0,colPos = 0;
    int elem = 0;
    int win = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            Box[i][j] = 0;
        }
    }
    

    printf("Tic Tac Toe Board:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", Box[i][j]);
        }
        printf("\n");
    }

   // idea from the gpt! 
    for (int moveCount = 0; moveCount < 9; moveCount++) {
        win = move(elem, rowPos, colPos, Box);
        if (win == 1) {
            printf("Game Over! last entry player won!\n");
            return 0;
        }
    }

    printf("Game Over! It's a draw!\n");
    return 0;
}

int game(int elem,int rowPos,int colPos, int Box[3][3]){
    for(int i=0;i<3;i++){
        if (rowPos == i){
            for(int j=0;j<3;j++){
                if (colPos == j){
                    if (Box[i][j] == 0) {
                        Box[i][j] = elem;
                        printf("\nElement '%d' placed at [%d][%d]\n", elem, i, j);
                    } else {
                        printf("Cell already filled! Try again.\n");
                        return -1;
                    }
                }
            }
        }
    }

    // Print updated grid
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", Box[i][j]);
        }
        printf("\n");
    }

    return Check(elem,rowPos,colPos,Box);
}

int move(int elem,int rowPos,int colPos,int Box[3][3]){
    int result;
    do {
        printf("\nEnter 1(Player 1) or 3(Player 2): \t");
        scanf("%d",&elem);

        printf("Mention the rowPos & colPos : \t");
        scanf("%d",&rowPos);
        printf("\t&\n");
        scanf("%d",&colPos);

        result = game(elem,rowPos,colPos,Box);
        if (result == -1) {
            printf("Invalid move. Try again.\n");
        }
    } while (result == -1); 

    return result;
}

int Check(int elem,int rowPos,int colPos,int Box[3][3]) {
    for (int i = 0; i < 3; i++) {
        // Check rows
        if (Box[i][0] == Box[i][1] && Box[i][1] == Box[i][2] && Box[i][0] != 0)
            return 1;

        // Check columns
        if (Box[0][i] == Box[1][i] && Box[1][i] == Box[2][i] && Box[0][i] != 0)
            return 1;
    }

    // Check diagonals
    if (Box[0][0] == Box[1][1] && Box[1][1] == Box[2][2] && Box[0][0] != 0)
        return 1;

    if (Box[0][2] == Box[1][1] && Box[1][1] == Box[2][0] && Box[0][2] != 0)
        return 1;

    return 0;  // No win
}
