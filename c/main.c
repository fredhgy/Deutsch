#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu()
{
	system("cls");
	printf("欢迎使用\n");
	printf("德语语法查询软件\n");
	printf("资料收集，软件制作:何广宇\n");
	printf("网站:www.heguangyu.net\n");
	printf("邮箱:me@heguangyu.net\n");
	 
}

void main()
{
	int n;
	menu();
	printf("请输入代码:"); 
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
			default:
				break;
		}
		getch();
		menu();
		printf("继续使用请输入序号，退出请输0:\n");
		scanf("%d",&n);
	}
	printf("谢谢使用，欢迎指正改进\n");
	printf("项目托管地址:github.com/fredhgy\n");
	system("pause");
}

void guancidaici()
{
	int a;
	//system("cls");
	printf("请输入代码1:"); 
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
	printf("|     格    | 阳性 | 中性 | 阴性 | 复数 |\n");
	printf("| --------- | ---- | ---- | ---- | ---- |\n");
	printf("| 第一格 N. | der  | das  | die  | die  |\n");
	printf("| 第二格 G. | des  | des  | der  | der  |\n");
	printf("| 第三格 D. | dem  | dem  | der  | den  |\n");
	printf("| 第四格 A. | den  | das  | die  | die  |\n");
}

void budingguanci()
{
	printf("222");
}
