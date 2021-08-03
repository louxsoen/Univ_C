#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)


int main()
{
	int arr[10];
	int max, min, a;

	for(int i = 0 ; i < 10 ; i++)	scanf("%d ", &arr[i]);

	// scanf("%d %d %d %d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7], &arr[8], &arr[9]);

	a = arr[0];
	for (int i = 1; i < 10; i++)
	{
		if (arr[0] < arr[i]) //최댓값 찾기
		{
			arr[0] = arr[i];
		}
	}
	max = arr[0];
	arr[0] = a;

	a = arr[0];
	for (int j = 1; j < 10; j++)
	{
		if (arr[0] > arr[j]) //최솟값 찾기
		{
			arr[0] = arr[j];
		}
	}
	min = arr[0];
	arr[0] = a;

	//출력
	printf("입력 배열은 : ");
	for (int k = 0; k < 10; k++)
	{
		printf("%d ", arr[k]);
	}
	printf("\n 최댓값은 %d, 최솟값은 %d입니다.", max, min);
}
