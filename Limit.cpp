/*

#include<stdio.h>
#include<string.h>
#define N 10
#pragma warning(disable:4996)
char newlimit(const char *msg);

typedef struct limit {
	char name[10];
	int limit_cost;
} limit;

int main() {
	int limitvalue;//�ѵ� �ִ�ġ ���� �ʿ�->���� ���� Ȯ��+ unsigned int���Ϸ��� ������ 0�� �Է��ϸ� limitvalue���� ���X

	const char msg[30] = "�ѵ� �Է�: ";

	limit list[N];
	char listName[N][10] = { "�ĺ�", "�����", "�ܽĺ�", "��ȭ��Ȱ", "ī��", "���ϼ���" };

	for (int i = 0; i < 6; i++) {
		printf("%s ", listName[i]);
		newlimit(msg);

		scanf("%d", &limitvalue);

		list[i].limit_cost = limitvalue;

		if ((list[i].limit_cost < 0) || (list[i].limit_cost % 10 != 0)) {
			i--;
		}
	}

	printf("�޴��� �����÷��� '������'�� �Է�, �߰��� �Է��Ͻ÷��� �ƹ�Ű�� �Է� �Ͻʽÿ�: ");
	char add[10] = "\0";
	scanf("%s", add);
	
	if (!strcmp(add, "������")) {
		return -1;
	}

	for (int j = 6; j < N;) {
		printf("\n�׸��� ���� �����ϼ���: ");
		scanf("%s", listName[j]);
		printf("%s �ѵ� �Է�: ", listName[j]);
		scanf("%d", &limitvalue);
		
		if ((limitvalue > 0) && (limitvalue % 10 == 0)) {
			j++;
		}

		printf("�޴��� �����÷��� '������'�� �Է�, �߰��� �Է��Ͻ÷��� �ƹ�Ű�� �Է� �Ͻʽÿ�: ");
		char add[10] = "\0";
		scanf("%s", add);

		if (!strcmp(add, "������")) {
			getchar();
			return -1;
		}
	}
	getchar();
	return 0;
}

char newlimit(const char *msg) {
	printf("%s", msg);
	return *msg;
}

*/