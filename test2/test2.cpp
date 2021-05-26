/*栈区，局部函数被调用时
作用域（可见性）此阶段针对编译和链接过程
*/
#include<stdio.h>
#include<math.h>

/*int g_max = 10;
int fun(int x, int y)
{
	int a = x + y;
	int b = x - y+g_max;
	a= g_min;//程序执行自上向下；
	return a + b;
}
int g_min = 0;//
int main()
{
	int a = 10, b = 20;
	fun(a, b);
	int c = g_max + g_min;

	return 0;
}*/
//数组定义
/*int main()
{
	int i = 10;
	int ar[10] = { 10,20,30,45,50,60,70,80,90,100 };
	for (int i = 0; i < 10; ++i)
	{
		printf("%d", ar[i]);
	}
	printf("\n");
	return 0;

}*/
/*
int main()
{
	int a = 3, b = 4,c = 5;

	a *= b + c;
	printf("%d", a);
	return 0;

}
*/
//三目运算符
/*
int MaxInt(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
{
	return a > b ? a : b;
}
int main()
{
	int a = 0, b = 0;
	int max = 0;
	scanf_s("%d,%d", &a, &b) ;
	max = MaxInt(a, b);
	printf("%d\n", max);

		return 0;
}  
*/
int main()
{
	int n = 26;
		for (int i = 0; i < n; ++i)
		{
			int k = i;
			for (int j = 0; j < n; ++j)
			{
				printf("%c", k + 'A');
				k = (k + 1) % n;

			}
			printf("\n");
		}
	return 0;
}