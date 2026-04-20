#include <stdio.h>
#include <stdlib.h>

int** createMx(){

}

void freeMx(){

}

void printMx(){

}

int main()
{
    int rows=3, columns=4, min=1, max=9;
    int **Mx=createMx(rows, columns, min, max);
    printMx(Mx,  rows, columns);
    freeMx(Mx, rows);
    return 0;
}
