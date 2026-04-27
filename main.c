#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int** createMx(int rows, int columns, int min, int max){
    int **Mx=(int**)calloc(rows, sizeof(int*));
    if(Mx==NULL){
        return NULL;
    }
    for(int i=0; i<rows; i++){
        Mx[i]=(int*)calloc(columns, sizeof(int));
        if(Mx[i]==NULL){
            for(int j=0; j<i; j++){
                free(Mx[j]);
            }
            free(Mx);
            return NULL;
        }
    }
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            Mx[i][j]=min+rand()%(max-min+1);
        }
    }
    return Mx;
}

void freeMx(int **Mx, int rows){
    for(int i=0; i<rows; i++){
        free(Mx[i]);
    }
    free(Mx);
}

void printMx(int **Mx, int rows, int columns){
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            printf("%4d",Mx[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    srand(time(NULL));
    int rows=3, columns=4, min=1, max=9;
    int **Mx=createMx(rows, columns, min, max);
    printMx(Mx,  rows, columns);
    freeMx(Mx, rows);
    return 0;
}
