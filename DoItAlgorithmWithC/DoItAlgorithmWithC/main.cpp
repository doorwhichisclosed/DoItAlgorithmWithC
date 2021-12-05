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
//	puts("각 요소의 값");
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
//	printf("배열 a의 요소 개수는 %d입니다.\n", na);
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
//		puts("메모리 할당에 실패했습니다.");
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
//	printf("요소 개수 : ");
//	scanf_s("%d", &na);
//	a = (int*)calloc(na, sizeof(int));
//	if (a == NULL)
//		puts("메모리 확보에 실패했습니다.");
//	else
//	{
//		printf("%d개의 정수를 입력하세요.\n", na);
//		for (i = 0; i < na; i++)
//		{
//			printf("a[%d] : ", i);
//			scanf_s("%d", &a[i]);
//		}
//		printf("각 요솟값은 아래와 같습니다.\n");
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
//	printf("사람 수: ");
//	scanf_s("%d", &number);
//	height = (int*)calloc(number, sizeof(int));
//	printf("%d 사람의 키를 입력하세요.\n", number);
//	for (i = 0; i < number; i++)
//	{
//		printf("height[%d] : ", i);
//		scanf_s("%d", &height[i]);
//	}
//	printf("최댓값은 %d입니다.\n", maxof(height, number));
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
	printf("사람 수 : ");
	scanf_s("%d", &number);
	height = (int*)calloc(number, sizeof(int));
	srand(time(NULL));
	for (i = 0; i < number; i++)
	{
		height[i] = 100 + rand() % 90;
		printf("height[%d] = %d\n", i, height[i]);
	}
	printf("최댓값은 %d입니다.\n", maxof(height, number));
	free(height);
	return 0;
}
#pragma endregion


