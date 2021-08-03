#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

void swap(int *a[5], int *b[5])
{
	int t[5] = { a[0], a[1], a[2], a[3], a[4] };
	for (int i = 0; i < 5; i++)
	{
		a[i] = b[i];
		b[i] = t[i];
	}
}

int main()
{
	int a[5], b[5];
	scanf("%d %d %d %d %d\n", &a[0], &a[1], &a[2], &a[3], &a[4]);
	scanf("%d %d %d %d %d", &b[0], &b[1], &b[2], &b[3], &b[4]);
	swap(a, b);
	printf("a : %d %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);
	printf("\nb : %d %d %d %d %d", b[0], b[1], b[2], b[3], b[4]);
}
