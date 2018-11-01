#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c, d;

	printf("숫자 4개를 입력하세요. : ");
	scanf("%i %i %i %i", &a, &b, &c, &d);
	

	//버블소트 함수 짜서 넣기 
	
	printf("오름차순 정렬 : %i %i %i %i", a, b, c, d);
	
	return 0;
}
