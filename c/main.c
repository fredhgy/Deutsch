#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu()
{
	system("cls");
	printf("��ӭʹ��\n");
	printf("�����﷨��ѯ���\n");
	printf("�����ռ����������:�ι���\n");
	printf("��վ:www.heguangyu.net\n");
	printf("����:me@heguangyu.net\n");
	 
}

void main()
{
	int n;
	menu();
	printf("���������:"); 
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
		printf("����ʹ����������ţ��˳�����0:\n");
		scanf("%d",&n);
	}
	printf("ллʹ�ã���ӭָ���Ľ�\n");
	printf("��Ŀ�йܵ�ַ:github.com/fredhgy\n");
	system("pause");
}

void guancidaici()
{
	int a;
	//system("cls");
	printf("���������1:"); 
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
	printf("|     ��    | ���� | ���� | ���� | ���� |\n");
	printf("| --------- | ---- | ---- | ---- | ---- |\n");
	printf("| ��һ�� N. | der  | das  | die  | die  |\n");
	printf("| �ڶ��� G. | des  | des  | der  | der  |\n");
	printf("| ������ D. | dem  | dem  | der  | den  |\n");
	printf("| ���ĸ� A. | den  | das  | die  | die  |\n");
}

void budingguanci()
{
	printf("222");
}
