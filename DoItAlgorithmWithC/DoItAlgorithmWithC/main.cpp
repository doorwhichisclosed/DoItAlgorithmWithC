#pragma region 2-1
//#include <stdio.h>
//#define N 5
//int main(void)
//{
//	int i;
//	int a[N];
//	for (i = 0; i < N; i++)
//	{
//		printf("a[%d] : ", i);
//		scanf_s("%d", &a[i]);
//	}
//	puts("�� ����� ��");
//	for (i = 0; i < N; i++)
//	{
//		printf("a[%d] = %d\n", i, a[i]);
//	}
//	return 0;
//}
#pragma endregion
#pragma region 2-2
//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	int a[5] = { 1,2,3,4,5 };
//	int na = sizeof(a) / sizeof(a[0]);
//	printf("�迭 a�� ��� ������ %d�Դϴ�.\n", na);
//	for (i = 0; i < na; i++)
//	{
//		printf("a[%d] = %d\n", i, a[i]);
//	}
//	return 0;
//}
#pragma endregion
#pragma region 2-3
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int* x;
//	x = (int*)calloc(1, sizeof(int));
//	if (x == NULL)
//	{
//		puts("�޸� �Ҵ翡 �����߽��ϴ�.");
//	}
//	else
//	{
//		*x = 57;
//		printf("*x = %d\n", *x);
//		free(x);
//	}
//	return 0;
//}
#pragma endregion
#pragma region 2-4
//#include <stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//	int i;
//	int* a;
//	int na;
//	printf("��� ���� : ");
//	scanf_s("%d", &na);
//	a = (int*)calloc(na, sizeof(int));
//	if (a == NULL)
//		puts("�޸� Ȯ���� �����߽��ϴ�.");
//	else
//	{
//		printf("%d���� ������ �Է��ϼ���.\n", na);
//		for (i = 0; i < na; i++)
//		{
//			printf("a[%d] : ", i);
//			scanf_s("%d", &a[i]);
//		}
//		printf("�� ��ڰ��� �Ʒ��� �����ϴ�.\n");
//		for (i = 0; i < na; i++)
//		{
//			printf("a[%d] = %d\n", i, a[i]);
//		}
//		free(a);
//	}
//	return 0;
//}
#pragma endregion
#pragma region 2-5
//#include <stdio.h>
//#include <stdlib.h>
//int maxof(const int a[], int n)
//{
//	int i;
//	int max = a[0];
//	for (i = 1; i < n; i++)
//	{
//		if (a[i] > max)max = a[i];
//	}
//	return max;
//}
//
//int main(void)
//{
//	int i;
//	int* height;
//	int number;
//	printf("��� ��: ");
//	scanf_s("%d", &number);
//	height = (int*)calloc(number, sizeof(int));
//	printf("%d ����� Ű�� �Է��ϼ���.\n", number);
//	for (i = 0; i < number; i++)
//	{
//		printf("height[%d] : ", i);
//		scanf_s("%d", &height[i]);
//	}
//	printf("�ִ��� %d�Դϴ�.\n", maxof(height, number));
//	free(height);
//	return 0;
//}
#pragma endregion
#pragma region 2-6
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
int maxof(const int a[], int n)
{
	int i;
	int max = a[0];
	for (i = 1; i < n; i++)
		if (a[i] > max)max = a[i];
	return max;
 }
int main(void)
{
	int i;
	int* height;
	int number;
	printf("��� �� : ");
	scanf_s("%d", &number);
	height = (int*)calloc(number, sizeof(int));
	srand(time(NULL));
	for (i = 0; i < number; i++)
	{
		height[i] = 100 + rand() % 90;
		printf("height[%d] = %d\n", i, height[i]);
	}
	printf("�ִ��� %d�Դϴ�.\n", maxof(height, number));
	free(height);
	return 0;
}
#pragma endregion


