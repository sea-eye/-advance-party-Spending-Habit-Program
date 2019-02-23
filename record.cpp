//테스트를 위해 구조체 선언한 상태
#include<stdio.h>
typedef struct Csrec {
	int item[10];
}Csrec;
typedef struct limit
{
	char name[20];
	int limit_cost;
}limit;
#define N 10
#pragma warning(disable:4996)
void Cmpitem(Csrec csrec, limit list[], char listName[N][20]);
int main(void)
{
	Csrec csrec = { (1010), (2020), csrec.item[2] = 3030, (4040), (5050), (6060), (7070), (8080), (9090), (10100) };
	limit list[N] = { list[0].limit_cost = 1000, list[1].limit_cost = 2000, list[2].limit_cost = 3000, \
					  list[3].limit_cost = 4000, list[4].limit_cost = 5000, list[5].limit_cost = 6000, \
					list[6].limit_cost = 7000, list[7].limit_cost = 8000, list[8].limit_cost = 9000, list[9].limit_cost = 10000 };
	char listName[N][20] = { "식비", "교통비", "외식비", "문화생활", "카페", "생일선물" };
	for (int i = 0; i < 10; i++)
	{
		printf("%s:", listName[i]);
		printf("%d\n", csrec.item[i]);
	}
	Cmpitem(csrec, list, listName);
	char select;
	printf("메뉴로 돌아가시겠습니까 ? (Y / N)\n(Y->메뉴로 돌아감, N->그대로)");
	scanf("%c", &select);
	getchar();
	if (select == 'N')
	{
		printf("나가시려면 N을 누르십시오");
		scanf("%c", &select);
		getchar();
		if (select == 'N')
			return 1;
	}
	else if (select == 'Y')
		return 1;
	getchar();
}
void Cmpitem(Csrec csrec, limit  list[], char listName[N][20])
{
	for (int i = 0; i < 10; i++)
	{
		if ((csrec.item[i]) > (list[i].limit_cost))
		{
		
			//printf("1");
			printf("%s", listName[i]);
			double rate = (((double)csrec.item[i] - list[i].limit_cost)/list[i].limit_cost)*100;
			printf("한도가 %.0lf%% 초과했습니다.\n", rate);

		}
	}
	getchar();
	return;
}