#include<stdio.h>
#include<stdlib.h>

int main(void) {
	float w, h, bmi;
	printf("input your weight(Kg)\n");
	printf("input your height(cm)\n");
	scanf_s("%f%f", &w, &h);
	h = h / 100;
	bmi = w / (h*h);
	printf("your BMI is : %f\n", bmi);
	if (bmi < 18.5)			printf("You are underweight\n");
	if (bmi >= 18.5&&bmi<25)printf("You are normal\n");
	if (bmi >= 25&&bmi<30)	printf("You are overweight\n");
	if (bmi >=30)			printf("You are obese\n");
	system("pause");
	return 0;
}