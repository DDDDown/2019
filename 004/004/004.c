#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
//int main()
//{
//
//	printf("hello world\n");
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";//创建字符数组
//	char arr2[] = { 'b', 'i', 't'};
//	char arr3[] = { 'b', 'i', 't','\0' };
//	char arr4[] = { 'b', 'i', 't', 0 };
//	char arr5[] = { 'b', 'i', 't', '0' };
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",strlen (arr2));
//	printf("%d\n", strlen(arr3));
//	printf("%d\n", strlen(arr4));
//	printf("%d\n", strlen(arr5));
//	return 0;
//}
//转义字符的用法
//int main()
//{
//	//printf("c:\\test\\12\\test.c");
//	//printf("\a\a\a\a\a\a");
//	printf("%d\n",strlen("c:\test\328\test.c"));
// \ddd   跟三个八进制数
//  \xddd  跟三个十六进制数
//	printf("c:\\test\\328\\test.c\n");
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	while (line <= 20000)
//	{
//		//for (line = 0; line <= 20000; line++)
//		//{
//		printf("好好写代码\n");
//		line++;
//		//}
//	}
//	if (line>20000)
//	printf("大牛");
//		
//	return 0;
//}
 int ADD(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	int sum = 0;
	//sum = num1 + num2;
	sum=ADD(num1, num2);//sum接收返回值
	printf("%d", sum);
	return 0;
}