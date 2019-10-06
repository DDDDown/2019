#include<stdio.h>
//交换数组a和b的内容
//int main()
//{
//	int arr1[5] = { 1, 2, 3, 4, 5 };
//	int arr2[5] = { 6, 7, 8, 9, 10 };
//	//下标一样的互换，循环
//	int t = 0;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		t = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = t;
//	}
//	printf("%s%s\n", arr1, arr2);
//	
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	float p = 0.0;
//	float q = 0.0;
//	float m = 0.0;
//	float sum = 0.0;
//	for (n = 1; n < 100; n+=2)
//	{
//	    p = 1 / n;
//        q = 1 / (n + 1);
//	    m = p*q;
//		sum = sum + m;
//    }
//	printf("%f\n", sum);
//	return 0;
//}


//编写程序数一下 1到 100 的所有整数中出现多少次数字9
//int main()
//{
//	int i = 0;
//	int j = 9;
//	for (j = 9; j < 100; j += 10)
//	{
//		i++;
//	}
//	printf("%d", i);
//	return 0;
//}


int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i++; i <= 100)
	{
 		int s = i / 10;
		int y = i % 10;
		if (s = 9)
			j++;
		if (y = 9)
			j++;
    }
	printf("%d", j);
	return 0;
} 