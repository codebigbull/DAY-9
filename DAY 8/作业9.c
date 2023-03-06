 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//交换数组
void swap()
{
	int i = 0;
	int m = 0;
	int arr1[] = { 2,4,6,4,5,6 };
	int arr2[] = { 2,6,7,8,3,4 };
	printf("交换前arr1= ");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("交换前arr2= ");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
	for (i = 0; i < 6; i++)
	{
		m = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = m;
	}
	printf("交换后arr1= ");
	for (i = 0; i < 6; i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\n");
	printf("交换后arr2= ");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");

}

//操作数组
void init(int arr[10])
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = 0;
	}
}

void print(int arr[10])
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}

void reverse(int arr[10])
{
	int i = 0;
	int j = 0;
	int arr2[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		arr2[10 - i - 1] = arr[i];
	}
	for (i = 9; i >= 0; i--)
	{
		arr[i] = arr2[i];
	}
}

void shu()
{
	int arr[10];
	init(arr);
	printf("初始化后的数组为：");
	print(arr);
	printf("\n");
	int arr2[10] = { 1,2,3,4,5,6,7,8,9,0 };
	printf("数组为：");
	print(arr2);
	printf("\n");
	reverse(arr2);
	printf("逆置后的数组为：");
	print(arr2);
	printf("\n");

}

//冒泡排序
void bobble_sorb(int arr[],int n)
{
	int i = 0;
	int j = 0;
	int temp = 0;
	for (i = 0; i < n-1; i++)
	{
		for (j = 0; j < n-i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j+1];
				arr[j+1] = arr[j ];
				arr[j ] = temp;
			}
		}
	}
}

void sorb()
{
	int arr[10] = { 4,2,6,7,8,9,5,0,3,1 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("数组排序前： ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	bobble_sorb(arr,sz);

	printf("数组排序后： ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	//swap();//交换数组
	//shu();//操作数组
	sorb();//冒泡排序
	return 0;
}