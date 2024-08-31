#include<stdio.h>

int main(void)

{
	double weight, height, BMI;

	printf("몸무게와 키(cm)를 입력하세요.");
	scanf("%lf%lf", &weight, &height);

	height = height / 100.0;
	BMI = weight / (height * 2);
	printf("입력하신 몸무게는 %lf이고 입력하신 키는 %lf입니다. BMI수치는 %lf입니다.", weight, height, BMI);
}

