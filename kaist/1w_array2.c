#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)


int main()
{
	double arr[5], a;
	scanf("%lf %lf %lf %lf %lf", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	printf("할인율을 입력하세요(%%) :"); // 문제점
	scanf("%lf", &a);

	//출력
	printf("입력된 가격 : ");
	for (int i = 0; i < 5; i++)
	{
		printf("%lf ", arr[i]);
	}
	//할인 적용
	printf("\n 할인된 가격 : ");
	for (int j = 0; j < 5; j++)
	{
		arr[j] = arr[j] * (100 - a) / 100;
		printf("%lf ", arr[j]);
	}
}