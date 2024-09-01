#include<stdio.h>

int main(void)

{
	double weight, height, BMI;

	printf("몸무게와 키(cm)를 입력하세요.");
	scanf("%lf%lf", &weight, &height);

	height = height / 100.0;
	BMI = weight / (height * height);
	
	if(BMI < 18.5)
	{
		printf("%.2lf로 저체중입니다.",BMI);
	}
	else if(18.5 <= BMI < 22.9)
	{
		printf("%.2lf로 정상입니다.",BMI);
	}
	else if(23 <= BMI < 24.9)
	{
		printf("%.2lf로 비만 전단계입니다.",BMI);
	}
	else if(25 <= BMI < 29.9)
	{
		printf("%.2lf로 비만 1단계입니다.",BMI);
	}
	else if(30 <= BMI < 34.9)
	{
		printf("%.2lf로 비만 2단계입니다.",BMI);
	}
	else if(35 <= BMI)
	{
		printf("%.2lf로 초고도비만입니다.",BMI);
	}

	return 0;
}

