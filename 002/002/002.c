// 将数组A中的内容和数组B中的内容进行交换。（数组一样大）
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

//int main()
//{
//	int arr1[5] = { 0, 1, 2, 3, 4, };
//	int arr2[5] = { 5, 6, 7, 8, 9  };
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = 0;
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//计算1/1 - 1/2 + 1/3 - 1/4 + 1/5 …… + 1/99 - 1 / 100 的值。
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			sum += 1.0 / i;
//		else
//			sum -= 1.0 / i;
//	}
//	printf("%lf ", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//			sum += 1.0 / i*flag;
//			flag = -flag;//正负循环
//	}
//	printf("%lf ", sum);
//	return 0;
//}


//编写程序数一下 1到 100 的所有整数中出现多少次数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)//十位为9，除10 商9
//			count++;
//		if (i % 10 == 9)//各位为9  除10 余9
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//打印
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********  11 7行 2*7-3-0
//  *********   9      2*7-3-2*1
//   *******    7
//	  *****
//	   ***
//	    *
//int main()
//{
//	int i = 0;
//	int line = 0;
//	int j = 0;
//	scanf("%d", &line);
//	for (i = 0; i <line; i++)//上半部分的打印，打印一行的内容
//	{
//		for (j = 1; j < line-i ; j++)
//		{
//			printf(" ");
//		}
//		//先打印空格
//        //再打印*
//		for (j = 0; j < 2 * i +1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		
//	}
//	//下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		//打印空格
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		//打印星号
//		for (j = 0; j < 2 * (line-i)-3 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//求出0～999之间的所有“水仙花数”并输出

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		int n = 0;
//	    int sum = 0;
//		int tmp = i;
//		while (tmp)
//		{
//			n++;
//			tmp /= 10;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum +=(int)pow(tmp % 10 , n);
//			tmp/=10;
//		}
//	if (sum == i)
//		printf("%d ", i);
//	}
//	
//	return 0;
//}