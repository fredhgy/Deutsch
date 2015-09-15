#include <stdio.h>
#include <stdlib.h>

#include "caidan.c"

#include "dingguancibiange.c" //形容词定冠词变格 
#include "dingguanci.c"			//定冠词 
#include "budingguanci.c"		//不定冠词 
#include "budingguancibiange.c"		//形容词不定冠词变格
#include "lingguancibiange.c"  //形容词零冠词变格
#include "xingrongcibijiaoji.c"  //形容词比较级 
#include "foudingguanci.c"	//否定冠词 
#include "budingdaici.c" //不定代词
#include "foudingdaici.c" //否定代词 

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
	while(n) //主菜单选项 
	{
		switch(n)
		{
			case 1:
				guanci();
				break;
			case 2:
				xingrongci();
				break;
			case 3:
				daici();
			case 666:
				system("wget http://www.baidu.com");
				system("pause");
				menu();
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
		else
		{
			menu();
		}
	}
	printf("谢谢使用，欢迎指正改进\n");
	printf("项目托管地址:github.com/fredhgy/Deutsch\n");
	printf("部分资料forked from GitHub/Frederick-S/GermanCheatSheet 感谢原作者\n"); 
	system("pause");
}

void guanci() //冠词选项 
{
	int n;
	menu();
	contain2();
	printf("请输入代码:"); 
	scanf("%d",&n);
	menu(); 
	switch(n)
		{
			case 1:
				dingguanci();
				break;
			case 2:
				budingguanci();
				break;
			case 3:
				foudingguanci(); 
				break;
		}
}

void xingrongci() //形容词选项 
{
	int n;
	menu();
	contain3();
	printf("请输入代码:"); 
	scanf("%d",&n);
	menu(); 
	switch(n)
		{
			case 1:
				dingguancibiange();
				break;
			case 2:
				budingguancibiange();
				break;
			case 3:
				lingguancibiange();
				break;	
			case 4:
				xingrongcibijiaoji();
				break;	
		}
}

void daici() //代词选项 
{
	int n;
	menu();
	contain4();
	printf("请输入代码:"); 
	scanf("%d",&n);
	menu(); 
	switch(n)
		{
			case 1:
				budingdaici();
				break;
			case 2:
				foudingdaici();
				break;
		/*	case 3:
				zhishidaici();
				break;	
			case 4:
				wuzhudaici();
				break; */
		}
} 

