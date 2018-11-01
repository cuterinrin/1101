#include <stdio.h>
#include <stdlib.h>
#define ROWS	3
#define COLS	3
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void printMatrix(int A[][COLS]) //다차원배열에서는 처음[]비워도 괜찮다 
{
	int i, j;
	
	for (i=0; i<ROWS; i++)
		{for (j=0; j<COLS; j++)
		{printf("%d ", A[i][j]);}
		printf("\n"); 
		}
return;
}

void addMatrix(int A[][COLS], int B[][COLS], int C[][COLS])  
{
	int i, j;
	
	for (i=0; i<ROWS; i++)
		{for (j=0; j<COLS; j++)
			{C[i][j] = A[i][j] + B[i][j];}
		 
		}
return;
}

int main(int argc, char *argv[]) {
	int A[ROWS][COLS]={
	{2,3,0},
	{8,9,1},
	{7,0,5}
	};
	
	int B[ROWS][COLS]={
	{1,0,0},
	{0,1,0},
	{0,0,1}
	};
	
	int C[ROWS][COLS];
	
	addMatrix(A,B,C);
	printMatrix(C);
	
	return 0;
}
