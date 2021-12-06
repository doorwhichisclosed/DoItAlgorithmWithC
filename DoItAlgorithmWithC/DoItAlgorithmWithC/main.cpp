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
//#include <time.h>
//#include <stdio.h>
//#include <stdlib.h>
//int maxof(const int a[], int n)
//{
//	int i;
//	int max = a[0];
//	for (i = 1; i < n; i++)
//		if (a[i] > max)max = a[i];
//	return max;
// }
//int main(void)
//{
//	int i;
//	int* height;
//	int number;
//	printf("사람 수 : ");
//	scanf_s("%d", &number);
//	height = (int*)calloc(number, sizeof(int));
//	if (height == NULL) return -1;
//	srand(time(NULL));
//	for (i = 0; i < number; i++)
//	{
//		height[i] = 100 + rand() % 90;
//		printf("height[%d] = %d\n", i, height[i]);
//	}
//	printf("최댓값은 %d입니다.\n", maxof(height, number));
//	free(height);
//	return 0;
//}
#pragma endregion
#pragma region 2-7
//#include <stdio.h>
//#include <stdlib.h>
//#define swap(type, x, y) do{type t=x;x=y;y=t;}while(0);
//
//void ary_reverse(int a[], int n)
//{
//	int i;
//	for (i = 0; i < n / 2; i++)
//		swap(int, a[i], a[n - i - 1]);
//}
//
//int main(void)
//{
//	int i;
//	int* x;
//	int nx;
//	printf("요소 개수 : ");
//	scanf_s("%d", &nx);
//	x = (int*)calloc(nx, sizeof(int));
//	if (x == NULL) return -1;
//	printf("%d개의 정수를 입력하세요.\n", nx);
//	for (i = 0; i < nx; i++)
//	{
//		printf("x[%d] : ", i);
//		scanf_s("%d", &x[i]);
//	}
//	ary_reverse(x, nx);
//	printf("배열의 요소를 역순으로 정렬했습니다.\n");
//	for (i = 0; i < nx; i++)
//		printf("x[%d] = %d\n", i, x[i]);
//	free(x);
//	return 0;
//}
#pragma endregion
#pragma region 2-8
//#include <stdio.h>
//int card_convr(unsigned x, int n, char d[])
//{
//	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	int digits = 0;
//	if (x == 0)
//		d[digits++] = dchar[0];
//	else
//		while (x)
//		{
//			d[digits++] = dchar[x % n];
//			x /= n;
//		}
//	return digits;
// }
//int main(void)
//{
//	int i;
//	unsigned no;
//	int cd;
//	int dno;
//	char cno[512];
//	int retry;
//	puts("10진수를 기수 변환합니다.");
//	do
//	{
//		printf("변환하는 음이 아닌 정수 : ");
//		scanf_s("%u", &no);
//		do {
//			printf("어떤 진수로 변환할까요?(2-36) : ");
//			scanf_s("%d", &cd);
//		} 		
//		while (cd < 2 || cd>36);
//		dno = card_convr(no, cd, cno);
//		printf("%d진수로는", cd);
//		for (i = dno - 1; i >= 0; i--)
//		{
//			printf("%c", cno[i]);
//		}
//		printf("입니다.\n");
//		printf("한 번 더 할까요?(1. 예/0. 아니오) : ");
//		scanf_s("%d", &retry);
//	} while (retry == 1);
//}
#pragma endregion



