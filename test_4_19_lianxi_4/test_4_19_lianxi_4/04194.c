#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int a = 18;
//	int b = 24;
//	int tmp = 0;
//	while (tmp = a%b)
//	{
//		a = b;
//		b = tmp;
//	}
//	printf("%d\n", b);
//	system("pause");
//	return 0;
//}

int main()
{
	int a = 10;
	int*p = &a;

	*p = 20;
	printf("%d\n", a);
	printf("%p\n", &a);
	printf("%d\n", *p);
    printf("%p\n", p);
	printf("%p\n", &p);
	system("pause");
	return 0;
}