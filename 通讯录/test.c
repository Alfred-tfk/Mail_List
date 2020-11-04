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
	//创建通讯录
	struct Contact con;//con就是通讯录，里面包含1000元素和size
	//初始化通讯录
	InitContact(&con);
	do {
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch (input)
		{
		case ADD://使用枚举的值0，1，2，3，4，5，6
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
			//销毁通讯录-释放动态开辟的内存
			DestryContact(&con);
			printf("退出通讯录\n");
			break;
		case SAVE:
			SaveContact(&con);
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}