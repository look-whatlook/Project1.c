#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//}

//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for(i=1; i<=n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int Fac2(int n)
//{
//	if(n<=1)
//		return 1;
//	else
//		return n*Fac2(n-1);
//}
//
//int main()
//{
//	//��n�Ľ׳�
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);//ѭ���ķ�ʽ
//	printf("%d\n", ret);
//
//	return 0;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
// int my_strlen(char* str)
//{
//	if(*str != '\0')
//		return 1+my_strlen(str+1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);//���ַ�������
//	//printf("%d\n", len);
//
//	//ģ��ʵ����һ��strlen����
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�
//	//����ȥ�Ĳ����������飬
//	//���ǵ�һ��Ԫ�صĵ�ַ
//	printf("len = %d\n", len);
//	return 0;
//} 

//쳲���������
//1 1 2 3 5 8 13 21 34 55 ....
//

//������n��쳲���������ʱ��
//int count = 0;
//int Fib(int n)
//{
//	if(n==3)//���Ե�3��쳲��������ļ������
//	{
//		count++;
//	}
//	if(n<=2)
//		return 1;
//	else
//		return Fib(n-1)+Fib(n-2);
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while(n>2)
//	{
//		c = a+b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD - ������������
//	ret = Fib(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//int main()
//{
//// 	char arr[] = "abcdef";//[a][b][c][d][e][f][\0]
//// 	//printf("%c\n", arr[3]);
//// 	int i = 0;
//// 	int len = strlen(arr);
//// 	for(i=0; i<len; i++)
//// 	{
//// 		printf("%c ", arr[i]);
//// 	}
//
//	return 0;
//}


//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = {{1,2,3},{4,5}};
//	//1 2 3 0
//	//4 5 0 0
//	//0 0 0 0
//
//	int i = 0;
//	for(i=0; i<3; i++)
//	{
//		int j = 0;
//		for(j=0; j<4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	//char ch[5][6];
//	//int arr[] = {1,2,3,4};
//	//int arr[][4] = {{1,2,3,4},{5,6,7,8}};
//	
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}

#include <stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	//ȷ��ð�����������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//������һ��Ҫ����������Ѿ�����
//		//ÿһ��ð������
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if(arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//���������������ʵ����ȫ����
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//��arr���������ų�����
//	//arr�����飬���Ƕ�����arr���д��Σ�
// //ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ &arr[0]
//	bubble_sort(arr, sz);//ð��������
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//
//
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//1. sizeof(������) - ��������ʾ�������飬
//    sizeof(������)���������������Ĵ�С����λ���ֽ�
//	  2. &�������������������������飬&��������
//       ȡ��������������ĵ�ַ
//
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr[0]);
//	//printf("%d\n", *arr);//1
//	return 0;
//}