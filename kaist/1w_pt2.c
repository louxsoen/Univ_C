#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

int find(int *a[10], int key, int *index[10])
{
	int num = 0;
	for (int j = 0; j < 10; j++)
	{
		if (a[j] == key)
		{
			index[num] = j;
			num += 1;
		}
	}
	return num;
}

int main()
{
	int a[10], key, num = 0, index[10] = { 0 ,0 ,0, 0, 0, 0, 0, 0, 0, 0};
	printf("10개의 정수형 배열을 입력하세요. : ");
	scanf("%d %d %d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9]);
	printf("\n찾을 값(정수)를 입력하세요. : ");
	scanf("%d", &key);

	num = find(a, key, index); // 문제

	printf("\n입력한 배열 : %d %d %d %d %d %d %d %d %d %d", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]);
	printf("\n입력한 Key : %d", key);
	printf("\n찾은 항목은 모두 %d개 입니다.", num);
	printf("\n찾은 항목의 인덱스 : ");
	if (num == 0)
	{
		printf("존재하지 않음");
	}
	else
	{
		for (int i = 0; i < num; i++)
		{
			printf("%d ", index[i]);
		}
	}
}