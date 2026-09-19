#include<stdio.h>
#include<string.h>
#define ROWS 5
#define COLS 5


typedef char Tboard[ROWS][COLS];


void display_grid(Tboard A){
    int i,j;
    for(i=0;i<ROWS;i++){
        printf(" %d  ", i+1);
    }
    printf("\n");
    for(i=0;i<ROWS;i++){
        printf("%d  ",i+1);
        for(j=0;j<COLS;j++){
            printf("%c  ", A[i][j]);
        }
        printf("\n");
    }
}
int drop_disc(A, col, disc){
    int done = 0;
    Tboard A;
    int col;
    int disc;
    int i = ROWS;
    if(col>=1 && col<=COLS){
        while( done !=1 && i>0){
            if( A[i][col] = ''){
                A[i][col] =disc;
                done = 1;
            }
            i--;
        }
    }else{
        done = -1;
    }
    return done;
}
int play_game(){
    int stop = 0;
    int placed_discs = 0;
    int player = 0;
    char emptygrid(c4grid);
    
    do{
        if(player%2 == 0){
            printf("Player 1,PLAY(Enter X/O)\n");
            int disc = 'X';
            scanf("%d", &col );
            player++;
            }else{
            printf("Player 2,PLAY(Enter X/O)");
            int disc = 'O';
            scanf("%d", &col);
            player++;
            }
        int done = drop_disc(c4grid,col,disc)
        if(done = 1){
        display_grid(c4grid);
        player++;
        placed_discs++;
        }else if{
        printf("Chosen column is full");
        }else{
        printf("Invalid column number");
        }  
        int aligned= is_aligned(c4grid);
        if(aligned == 1 && disc == 'X'){
            printf("Game Over.Player 1 Wins!");
            stop = 1;
        }else if( is_aligned == 1 && disc == 'O'){
            printf("Game Over!.Player 2 Wins");
            stop=1;
        }else{
            printf("Error, Unknown Player type: %d !", disc);

        }
    

    }while(stop !=1 && placed_discs < 25)
    if(stop=0){
        printf("Game Over! It's a tie");

    }
}


int main(){
    Tboard A;
    int col;
    int disc;
    Tboard c4grid;
    display_grid(c4grid);
    play_game()




    return 0;
}

