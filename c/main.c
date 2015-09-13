#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu()
{
	system("cls");
	printf("hello\n");
}

void main()
{
	int n;
	menu();
	scanf("%d",&n);
	while(n)
	{
		switch(n)
		{
			case 1:
				guancidaici();
				break;
			case 2:
				xingrongci();
				break;
		}
		getch();
		menu();
		scanf("input:%d",&n);
	}
}

void guancidaici()
{
	int a;
	scanf("%d",&a);
	switch(a)
		{
			case 1:
				dingguanci();
				break;
			case 2:
				budingguanci();
				break;
		}
}

void xingrongci()
{
	printf("adj");
}

void dingguanci()
{
	printf("111");
}

void budingguanci()
{
	printf("222");
}
