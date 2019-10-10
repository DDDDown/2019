//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//2 22 222 2222 出现
//	int tmp = a;
//	int sn = 0;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		sn += tmp;
//		tmp = tmp * 10 + a;
//	}
//	printf("%d", sn);
//	return 0;
//}
//前n项之和
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a,&n);
//	int k =0 ;
//	int sn = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10+a;
//		sn += k;
//	}
//	printf("%d", sn);
//	return 0;
//}