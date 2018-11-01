#define ROWS	3
#define COLS	3 //COLS가 뭔지 몰라서 컴파일 에러가 났으므로 메인의 디파인을 옮겨 줌 

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

