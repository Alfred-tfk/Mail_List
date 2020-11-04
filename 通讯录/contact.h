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

//ͨѶ¼����
struct Contact
{
	struct PeoInfo *data;//���ÿ���˵ĸ���Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
	int capacity;
};

//��������
//��ʼ��ͨѶ¼
void InitContact(struct Contact* ps);
//����һ����ϵ��
void AddContact(struct Contact* ps);
//��ʾͨѶ¼����
void ShowContact(const struct Contact* ps);
//ɾ��ָ������ϵ��
void DelContact(struct Contact* ps);
//����ָ���˵���Ϣ
void SearchContact(const struct Contact* ps);
//�޸�ָ����ϵ��
void ModifyContact(struct Contact* ps);
//ͨѶ¼����
void SortContact(struct Contact* ps);
//����ͨѶ¼
void DestryContact(struct Contact* ps);
//�����ļ�
void SaveContact(struct Contact* ps);
//�����ļ��е���Ϣ��ͨѶ¼
void LoadContact(struct Contact* ps);

