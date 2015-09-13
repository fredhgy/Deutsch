#include <stdio.h>
#include <stdlib.h>

#include "xingrongci.c"
#include "dingguanci.c"
#include "budingguanci.c"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu()
{
	system("cls");
	printf("欢迎使用\n");
	printf("德语语法查询软件\n");
	printf("资料收集，软件制作:何广宇\n");
	printf("网站:www.heguangyu.net\n");
	printf("邮箱:me@heguangyu.net\n");
	printf("==================================\n"); 
}

void main()
{
	int n;
	menu();
	contain1();
	printf("请输入代码:"); 
	scanf("%d",&n);
	menu(); 
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
			default:
				break;
		}
		getch();
		contain1();
		printf("继续使用请输入序号，退出请输0:\n");
		scanf("%d",&n);
		if(n!=0)
		{
			menu();
			contain1(); 
		}
	}
	printf("谢谢使用，欢迎指正改进\n");
	printf("项目托管地址:github.com/fredhgy/Deutsch\n");
	system("pause");
}

void contain1() //主菜单 
{
	printf("==================================\n");
	printf("冠词代词：1\n");
	printf("形容词：2\n");
	printf("==================================\n");
}

void guancidaici() //冠词代词选项 
{
	int a;
	menu();
	contain2();
	printf("请输入代码1:"); 
	scanf("%d",&a);
	menu(); 
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

void contain2() //冠词代词菜单 
{
	printf("==================================\n");
	printf("定冠词：1\n");
	printf("不定冠词：2\n");
	printf("==================================\n");
}

