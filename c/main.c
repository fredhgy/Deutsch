#include <stdio.h>
#include <stdlib.h>

#include "caidan.c"

#include "dingguancibiange.c" //���ݴʶ��ڴʱ�� 
#include "dingguanci.c"			//���ڴ� 
#include "budingguanci.c"		//�����ڴ� 
#include "budingguancibiange.c"		//���ݴʲ����ڴʱ��
#include "lingguancibiange.c"  //���ݴ���ڴʱ��
#include "xingrongcibijiaoji.c"  //���ݴʱȽϼ� 
#include "foudingguanci.c"	//�񶨹ڴ� 
#include "budingdaici.c" //��������
#include "foudingdaici.c" //�񶨴��� 

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
	while(n) //���˵�ѡ�� 
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
		printf("����ʹ����������ţ��˳�����0:\n");
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
	printf("ллʹ�ã���ӭָ���Ľ�\n");
	printf("��Ŀ�йܵ�ַ:github.com/fredhgy/Deutsch\n");
	printf("��������forked from GitHub/Frederick-S/GermanCheatSheet ��лԭ����\n"); 
	system("pause");
}

void guanci() //�ڴ�ѡ�� 
{
	int n;
	menu();
	contain2();
	printf("���������:"); 
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

void xingrongci() //���ݴ�ѡ�� 
{
	int n;
	menu();
	contain3();
	printf("���������:"); 
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

void daici() //����ѡ�� 
{
	int n;
	menu();
	contain4();
	printf("���������:"); 
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

