#include<stdio.h>
#include<stdlib.h>

int main(void) {
	//11111111111111111111111
	printf("    *    \n");
	printf("   ***   \n");
	printf("  *****  \n");
	printf(" ******* \n");
	printf("*********\n");
	//22222222222222222222222
	printf("----------------\n");
	int a=4, b=4;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 9; j++) {
			if (j <= a && j >= b)printf("*");
			else printf(" ");
		}
		printf("\n");
		a++; b--;
	}


	system("pause");
	return 0;
}