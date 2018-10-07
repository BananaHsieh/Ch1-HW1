#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int first, second;

	printf("input two integers\n");
	scanf_s("%d%d", &first, &second);

	if (first%second == 0)printf("the %d is a multiple of the %d\n",first,second);
	else printf("the %d is not a multiple of the %d\n", first, second);

	system("pause");
	return 0;
}