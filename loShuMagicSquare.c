#include<stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void testMagicSquare(int squareTest[3][3], int *row, int *column, int *diagonal);

int main(){

    int row, column, diagonal;

    int loShuSquare[3][3] = {
        {8, 1, 6}, 
        {3, 5, 7}, 
        {4, 9, 2}};

    int notLoShuSquare[3][3] = {
        {2, 1, 6}, 
        {3, 4, 7}, 
        {8, 9, 5}};

    testMagicSquare(loShuSquare, &row, &column, &diagonal);
    if(row == 1 && column == 1 && diagonal == 1)
    {
        printf("\nThis is a Lo Shu Magic Square!");
    }
    else printf("\nThis is not a Lo Shu Magic Square.");

    testMagicSquare(notLoShuSquare, &row, &column, &diagonal);
    if(row == 1 && column == 1 && diagonal == 1)
    {
        printf("\nThis is a Lo Shu Magic Square!\n");
    }
    else printf("\nThis is not a Lo Shu Magic Square.\n");

    return 0;
}

void testMagicSquare(int squareTest[3][3], int *row, int *column, int *diagonal)
{
    int row1, row2, row3;
    int col1, col2, col3;
    int diag1, diag2;

    row1 = squareTest[0][0] + squareTest[0][1] + squareTest[0][2];
    row2 = squareTest[1][0] + squareTest[1][1] + squareTest[1][2];
    row3 = squareTest[2][0] + squareTest[2][1] + squareTest[2][2];

    if(row1 == 15 && row2 == 15 && row3 ==15)
    {
        *row = 1;
    }
    else *row = 2;

    col1 = squareTest[0][0] + squareTest[1][0] + squareTest[2][0];
    col2 = squareTest[0][1] + squareTest[1][1] + squareTest[2][1];
    col3 = squareTest[0][2] + squareTest[1][2] + squareTest[2][2];

    if(row1 == 15 && row2 == 15 && row3 ==15)
    {
        *column = 1;
    }
    else *column = 2;

    diag1 = squareTest[0][0] + squareTest[1][1] + squareTest[2][2];
    diag2 = squareTest[0][2] + squareTest[1][1] + squareTest[2][0];

     if(diag1 == 15 && diag2 == 15)
    {
        *diagonal = 1;
    }
    else *diagonal = 2;

    
}
