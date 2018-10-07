#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n;
	printf("input a integer \n");
	scanf_s("%d",&n);
	if (n % 2 == 0)printf("%d is even\n",n);
	else printf("%d is odd\n",n);

	system("pause");
	return 0;
}