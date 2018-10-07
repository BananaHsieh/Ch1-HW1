#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	//方形///////////////////////
	printf("------------方形------------\n\n");
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {

			if (i == 0 || i == 8)printf("*");
			else if (j == 0 || j == 8)printf("*");
			else printf(" ");


		}
		printf("\n");
	}
	//圓形//////////////////////
	printf("------------圓形------------\n\n");
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {

			if (i == 0 || i == 8) {
				if (j == 3 || j == 4 || j == 5)printf("*");
				else printf(" ");
			}
			else if (i == 1 || i == 7) {
				if (j == 1 || j == 7)printf("*");
				else printf(" ");
			}
			else if (j == 0 || j == 8) printf("*");
			else printf(" ");

		}
		printf("\n");
	}
	//雨傘//////////////////////
	printf("------------雨傘------------\n\n");
	int n = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (i < 3)
				if (j >= 4 - n && j <= 4 + n)printf("*");
				else printf(" ");

			else
				if (j == 4)printf("*");
				else printf(" ");
		}
		printf("\n");
		n++;
	}
	//菱形//////////////////////
	printf("------------菱形------------\n\n");
	int a = 4, b = 4;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (j == a || j == b)printf("*");
			else printf(" ");
		}
			if (i < 4) { a--; b++; }
			else { a++; b--; }
			printf("\n");
		
		}
		system("pause");
		return 0;
	}
