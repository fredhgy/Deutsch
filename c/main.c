#include <stdio.h>
#include <stdlib.h>

#include "xingrongci.c"
#include "dingguanci.c"
#include "budingguanci.c"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu()
{
	system("cls");
	printf("��ӭʹ��\n");
	printf("�����﷨��ѯ���\n");
	printf("�����ռ����������:�ι���\n");
	printf("��վ:www.heguangyu.net\n");
	printf("����:me@heguangyu.net\n");
	printf("==================================\n"); 
}

void main()
{
	int n;
	menu();
	contain1();
	printf("���������:"); 
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
		printf("����ʹ����������ţ��˳�����0:\n");
		scanf("%d",&n);
		if(n!=0)
		{
			menu();
			contain1(); 
		}
	}
	printf("ллʹ�ã���ӭָ���Ľ�\n");
	printf("��Ŀ�йܵ�ַ:github.com/fredhgy/Deutsch\n");
	system("pause");
}

void contain1() //���˵� 
{
	printf("==================================\n");
	printf("�ڴʴ��ʣ�1\n");
	printf("���ݴʣ�2\n");
	printf("==================================\n");
}

void guancidaici() //�ڴʴ���ѡ�� 
{
	int a;
	menu();
	contain2();
	printf("���������1:"); 
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

void contain2() //�ڴʴ��ʲ˵� 
{
	printf("==================================\n");
	printf("���ڴʣ�1\n");
	printf("�����ڴʣ�2\n");
	printf("==================================\n");
}

