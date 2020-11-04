#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

#define DEFAULT_SZ 3;
#define MAX_NAME 20
#define MAX_TELE 12
#define MAX_SEX 12
#define MAX_ADDR 30

enum Option {
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SAVE
};

struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//通讯录类型
struct Contact
{
	struct PeoInfo *data;//存放每个人的个信息
	int size;//记录当前已经有的元素个数
	int capacity;
};

//声明函数
//初始化通讯录
void InitContact(struct Contact* ps);
//增加一个联系人
void AddContact(struct Contact* ps);
//显示通讯录内容
void ShowContact(const struct Contact* ps);
//删除指定的联系人
void DelContact(struct Contact* ps);
//查找指定人的信息
void SearchContact(const struct Contact* ps);
//修改指定联系人
void ModifyContact(struct Contact* ps);
//通讯录排序
void SortContact(struct Contact* ps);
//销毁通讯录
void DestryContact(struct Contact* ps);
//保存文件
void SaveContact(struct Contact* ps);
//加载文件中的信息到通讯录
void LoadContact(struct Contact* ps);

