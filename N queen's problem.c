#include <stdio.h>
#include <stdbool.h>
#define MAX 20

void printSolution(int board[MAX][MAX], int n) {
	int i,j;
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            if (board[i][j] == 1)
                printf("Q ");
            else
                printf(". ");
        }
        printf("\n");
    }
    printf("\n");
}
bool isSafe(int board[MAX][MAX], int row, int col, int n) {
    int i,j;
    for ( i = 0; i < row; i++) {
        if (board[i][col] == 1)
            return false;
    }
    for ( i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1)
            return false;
    }
    for ( i = row, j = col; i >= 0 && j < n; i--, j++) {
        if (board[i][j] == 1)
            return false;
    }
    return true;
}
bool solveNQueens(int board[MAX][MAX], int row, int n) {
	int col;
    if (row == n) {
        printSolution(board, n);
        return true;
    }
    bool res = false;
    for ( col = 0; col < n; col++) {
        if (isSafe(board, row, col, n)) {
            board[row][col] = 1; 

            res = solveNQueens(board, row + 1, n) || res;
            board[row][col] = 0;
        }
    }
    return res;
}
int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    int board[MAX][MAX] = {0};
    if (!solveNQueens(board, 0, n)) {
        printf("Solution does not exist\n");
    }
    return 0;
}


