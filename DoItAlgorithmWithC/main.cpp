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
//	printf("��� �� : ");
//	scanf_s("%d", &number);
//	height = (int*)calloc(number, sizeof(int));
//	if (height == NULL) return -1;
//	srand(time(NULL));
//	for (i = 0; i < number; i++)
//	{
//		height[i] = 100 + rand() % 90;
//		printf("height[%d] = %d\n", i, height[i]);
//	}
//	printf("�ִ��� %d�Դϴ�.\n", maxof(height, number));
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
//	printf("��� ���� : ");
//	scanf_s("%d", &nx);
//	x = (int*)calloc(nx, sizeof(int));
//	if (x == NULL) return -1;
//	printf("%d���� ������ �Է��ϼ���.\n", nx);
//	for (i = 0; i < nx; i++)
//	{
//		printf("x[%d] : ", i);
//		scanf_s("%d", &x[i]);
//	}
//	ary_reverse(x, nx);
//	printf("�迭�� ��Ҹ� �������� �����߽��ϴ�.\n");
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
//	puts("10������ ��� ��ȯ�մϴ�.");
//	do
//	{
//		printf("��ȯ�ϴ� ���� �ƴ� ���� : ");
//		scanf_s("%u", &no);
//		do {
//			printf("� ������ ��ȯ�ұ��?(2-36) : ");
//			scanf_s("%d", &cd);
//		} 		
//		while (cd < 2 || cd>36);
//		dno = card_convr(no, cd, cno);
//		printf("%d�����δ�", cd);
//		for (i = dno - 1; i >= 0; i--)
//		{
//			printf("%c", cno[i]);
//		}
//		printf("�Դϴ�.\n");
//		printf("�� �� �� �ұ��?(1. ��/0. �ƴϿ�) : ");
//		scanf_s("%d", &retry);
//	} while (retry == 1);
//}
#pragma endregion
#pragma region Q2-1
//#include <stdio.h>
//#include <stdlib.h>
//int minof(const int a[], int n)
//{
//	int i;
//	int min = a[0];
//	for (i = 1; i < n; i++)
//	{
//		if (a[i] < min)min = a[i];
//	}
//	return min;
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
//	printf("�ּڰ��� %d�Դϴ�.\n", minof(height, number));
//	free(height);
//	return 0;
//}
#pragma endregion
#pragma region Q2-2
//#include <stdio.h>
//#include <stdlib.h>
//int sumof(const int a[], int n)
//{
//	int i;
//	int sum = a[0];
//	for (i = 1; i < n; i++)
//	{
//		sum += a[i];
//	}
//	return sum;
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
//	printf("���� %d�Դϴ�.\n", sumof(height, number));
//	free(height);
//	return 0;
//}
#pragma endregion
#pragma region Q2-3
//#include <stdio.h>
//#include <stdlib.h>
//double aveof(const int a[], int n)
//{
//	int i;
//	int ave = a[0];
//	for (i = 1; i < n; i++)
//	{
//		ave += a[i];
//	}
//	return ave /= n;
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
//	printf("����� %lf�Դϴ�.\n", aveof(height, number));
//	free(height);
//	return 0;
//}
#pragma endregion
#pragma region Q2-4
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
//	srand(time(NULL));
//	number = 5 + rand() % 16;
//	height = (int*)calloc(number, sizeof(int));
//	if (height == NULL) return -1;
//	srand(time(NULL));
//	for (i = 0; i < number; i++)
//	{
//		height[i] = 100 + rand() % 90;
//		printf("height[%d] = %d\n", i, height[i]);
//	}
//	printf("�ִ��� %d�Դϴ�.\n", maxof(height, number));
//	free(height);
//	return 0;
//}
#pragma endregion
#pragma region Q2-5
//#include <stdio.h>
//#include <stdlib.h>
//#define swap(type, x, y) do{type t=x;x=y;y=t;}while(0);
//
//void ary_reverse(int a[], int n)
//{
//	int i;
//	for (i = 0; i < n / 2; i++)
//	{
//		swap(int, a[i], a[n - i - 1]);
//		printf("a[%d]�� a[%d]�� ��ȯ�մϴ�.\n", i, n - i - 1);
//	}
//}
//
//int main(void)
//{
//	int i;
//	int* x;
//	int nx;
//	printf("��� ���� : ");
//	scanf_s("%d", &nx);
//	x = (int*)calloc(nx, sizeof(int));
//	if (x == NULL) return -1;
//	printf("%d���� ������ �Է��ϼ���.\n", nx);
//	for (i = 0; i < nx; i++)
//	{
//		printf("x[%d] : ", i);
//		scanf_s("%d", &x[i]);
//	}
//	ary_reverse(x, nx);
//	printf("�迭�� ��Ҹ� �������� �����߽��ϴ�.\n");
//	for (i = 0; i < nx; i++)
//		printf("x[%d] = %d\n", i, x[i]);
//	free(x);
//	return 0;
//}
#pragma endregion
#pragma region Q2-6
//#include <stdio.h>
//int card_con(unsigned x, int n, char d[])
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
//	puts("10������ ��� ��ȯ�մϴ�.");
//	do
//	{
//		printf("��ȯ�ϴ� ���� �ƴ� ���� : ");
//		scanf_s("%u", &no);
//		do {
//			printf("� ������ ��ȯ�ұ��?(2-36) : ");
//			scanf_s("%d", &cd);
//		} 		
//		while (cd < 2 || cd>36);
//		dno = card_con(no, cd, cno);
//		printf("%d�����δ�", cd);
//		for (i = 0; i < dno; i++)
//		{
//			printf("%c", cno[i]);
//		}
//		printf("�Դϴ�.\n");
//		printf("�� �� �� �ұ��?(1. ��/0. �ƴϿ�) : ");
//		scanf_s("%d", &retry);
//	} while (retry == 1);
//}
#pragma endregion
#pragma region Q2-7
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
//			if (x != 0)
//			{
//				printf("%d |        %d *** %d\n", n, x, x % n);
//				printf("  +--------\n");
//			}
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
//	puts("10������ ��� ��ȯ�մϴ�.");
//	do
//	{
//		printf("��ȯ�ϴ� ���� �ƴ� ���� : ");
//		scanf_s("%u", &no);
//		do {
//			printf("� ������ ��ȯ�ұ��?(2-36) : ");
//			scanf_s("%d", &cd);
//		} 		
//		while (cd < 2 || cd>36);
//		dno = card_convr(no, cd, cno);
//		printf("%d�����δ�", cd);
//		for (i = dno - 1; i >= 0; i--)
//		{
//			printf("%c", cno[i]);
//		}
//		printf("�Դϴ�.\n");
//		printf("�� �� �� �ұ��?(1. ��/0. �ƴϿ�) : ");
//		scanf_s("%d", &retry);
//	} while (retry == 1);
//}
#pragma endregion
#pragma region Q2-8
//#include <stdio.h>
//void ary_copy(int a[], const int b[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		a[i] = b[i];
//	}
//}
//int main()
//{
//	int a[512];
//	int b[512];
//	int n;
//	printf("�� �Է�: ");
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		int num;
//		scanf_s("%d", &num);
//		b[i] = num;
//	}
//	ary_copy(a, b, n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d\n", a[i]);
//	}
//	return 0;
//}
#pragma endregion
#pragma region Q2-9
//#include <stdio.h>
//void ary_rcopy(int a[], const int b[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		a[i] = b[n-1-i];
//	}
//}
//int main()
//{
//	int a[512];
//	int b[512];
//	int n;
//	printf("�� �Է�: ");
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		int num;
//		scanf_s("%d", &num);
//		b[i] = num;
//	}
//	ary_rcopy(a, b, n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d\n", a[i]);
//	}
//	return 0;
//}
#pragma endregion
#pragma region Q2-10
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//void shuffle(int a[], int n)
//{
//	srand(time(NULL));
//	for (int i = 0; i < n; i++)
//	{
//		int num1 = rand() % n;
//		int num2 = rand() % n;
//		int tmp = a[num1];
//		a[num1] = a[num2];
//		a[num2] = tmp;
//	}
//}
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int* a = (int*)calloc(n, sizeof(int));
//	if (a == NULL) return -1;
//	for (int i = 0; i < n; i++)
//	{
//		int num;
//		scanf_s("%d", &num);
//		a[i] = num;
//	}
//	shuffle(a, n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d\n", a[i]);
//	}
//	return 0;
//}
#pragma endregion
#pragma region 2-9
//#include <stdio.h>
//int main(void)
//{
//	int i, n;
//	unsigned long counter = 0;
//	for (n = 2; n <= 1000; n++)
//	{
//		for (i = 2; i < n; i++)
//		{
//			counter++;
//			if (n % i == 0)
//				break;
//		}
//		if (n == i)
//			printf("%d\n", n);
//	}
//	printf("�������� ������ ȸ�� : %lu\n", counter);
//	return 0;
//}
#pragma endregion










