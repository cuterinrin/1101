#include <stdio.h>
#include <stdlib.h>
#define N_SORT 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int nums[N_SORT];
	int i;

	printf("input %i numbers : ", N_SORT);
	for (i=0; i<N_SORT; i++)
	{
	 scanf("%d", &nums[i]);
	}

	//버블소트 함수 짜서 넣기 
	
	printf("sorted numbers are : ", N_SORT);
	for (i=0; i<N_SORT; i++)
	{
	 printf("%d ", &nums[i]);
	}
	
	return 0;
}
