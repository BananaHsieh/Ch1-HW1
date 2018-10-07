#include<stdio.h>
#include<stdlib.h>

int main(void) {
	float total,avgmiles,sum;
	int gascost, fee, tolls;

	printf("input total miles driven per day\n");
	printf("input cost per gallon of gasoline\n");
	printf("input average miles per gallon\n");
	printf("input parking fees per day\n");
	printf("input tolls per day\n");
	scanf_s("%f%d%f%d%d", &total, &gascost, &avgmiles, &fee, &tolls);

	sum = (total / avgmiles) * gascost + fee + tolls;
	printf("the user's cost per day of driving to work : %f\n",sum);
	
	system("pause");
	return 0;
}