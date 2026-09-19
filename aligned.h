#include<stdio.h>





int is_aligned(Tboard A){
    int i,j;
    for(i=0;i<ROWS;i++){
        for(j=0;j<=COLS-4;j++){
            if( A[i][j] != ' '&&
                A[i][j] == A[i][j+1]&&
                A[i][j] == A[i][j+2]&&
                A[i][j] == A[i][j+3]){
                    return 1;
                }
        }
    }

    for(i=0;i<=ROWS-4;i++){
        for(j=0;j<COLS;j++){
            if( A[i][j] != ' '&&
                A[i][j] == A[i+1][j]&&
                A[i][j] == A[i+2][j]&&
                A[i][j] == A[i+3][j]){
                    return 1;
                }
        }
    }


    for(i=0;i<ROWS-4;i++){
        for(j=0;j<=COLS-4;j++){
            if( A[i][j] != ' '&&
                A[i][j] == A[i+1][j+1]&&
                A[i][j] == A[i+2][j+2]&&
                A[i][j] == A[i+3][j+3]){
                    return 1;
                }
        }
    }
     for(i=3;i<ROWS;i++){
        for(j=3;j<COLS;j++){
            if( A[i][j] != ' '&&
                A[i][j] == A[i-1][j-1]&&
                A[i][j] == A[i-2][j-2]&&
                A[i][j] == A[i-3][j-3]){
                    return 1;
                }
        }
    }


    return 0;
}