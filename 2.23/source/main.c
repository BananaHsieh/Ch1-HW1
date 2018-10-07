#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int a[3];
	int max = -99999, min = 99999;
	printf("input three integers\n");
	for (int i = 0; i < 3; i++) {
		scanf_s("%d", &a[i]);
		if (a[i] >= max) max = a[i];
		if (a[i] <= min) min = a[i];
	}
	printf("the largest integers is : %d \n", max);
	printf("the smallest integers is : %d \n", min);

	system("pause");
	return 0;
}
