#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void menu() {
	printf("************************************\n");
	printf("******1.add          2.del**********\n");
	printf("******3.search       4.modify*******\n");
	printf("******5.show         6.save*********\n");
	printf("******0.exit               *********\n");
	printf("************************************\n");
}

int main() {
	int input = 0;
	int size = 0;
	//����ͨѶ¼
	struct Contact con;//con����ͨѶ¼���������1000Ԫ�غ�size
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do {
		menu();
		printf("��ѡ��:>");
		scanf("%d",&input);
		switch (input)
		{
		case ADD://ʹ��ö�ٵ�ֵ0��1��2��3��4��5��6
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;	
		case EXIT:
			SaveContact(&con);
			//����ͨѶ¼-�ͷŶ�̬���ٵ��ڴ�
			DestryContact(&con);
			printf("�˳�ͨѶ¼\n");
			break;
		case SAVE:
			SaveContact(&con);
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}