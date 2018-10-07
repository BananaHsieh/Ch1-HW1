#include<stdio.h>
#include<stdlib.h>

int main(void) {
	//PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 9; j++) {
			if (i == 0)printf("P");
			else if (i == 4) {
				if (j == 5 || j == 7)printf("P");

				else printf(" ");
			}
			else { 
				if (j == 4 || j == 8) printf("P");
			    else printf(" ");
			}
		}
		printf("\n");
	}
	//JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 9; j++) {
			if (i == 0) {
				if (j == 2 || j == 3)printf("J");
				else printf(" ");
			}
			else if (i == 1 || i == 3) {
				if (j == 1)printf("J");
				else printf(" ");
			}
			else if (i == 2) {
				if (j == 0)printf("J");
				else printf(" ");
			}
			else {
				if (j == 0 || j == 1)printf(" ");
				else printf("J");
			}
		}
		printf("\n");
	}
	//DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 9; j++) {
			if (i == 0)printf("D");
			else if (i == 1 || i == 2) {
				if (j == 0 || j == 8)printf("D");
				else printf(" ");
			}
			else if (i==3) {
				if (j == 1 || j == 7)printf("D");
				else printf(" ");
			}
			else {
				if (j == 2 || j == 3||j == 4||j == 5 ||j == 6)printf("D");
				else printf(" ");
			}
		}
		printf("\n");
	}
				
				system("pause");
				return 0;
	}
