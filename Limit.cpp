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
	int limitvalue;//한도 최대치 논의 필요->이후 범위 확립+ unsigned int로하려고 했으나 0을 입력하면 limitvalue값이 출력X

	const char msg[30] = "한도 입력: ";

	limit list[N];
	char listName[N][10] = { "식비", "교통비", "외식비", "문화생활", "카페", "생일선물" };

	for (int i = 0; i < 6; i++) {
		printf("%s ", listName[i]);
		newlimit(msg);

		scanf("%d", &limitvalue);

		list[i].limit_cost = limitvalue;

		if ((list[i].limit_cost < 0) || (list[i].limit_cost % 10 != 0)) {
			i--;
		}
	}

	printf("메뉴로 나가시려면 '나가기'를 입력, 추가로 입력하시려면 아무키나 입력 하십시오: ");
	char add[10] = "\0";
	scanf("%s", add);
	
	if (!strcmp(add, "나가기")) {
		return -1;
	}

	for (int j = 6; j < N;) {
		printf("\n항목을 새로 설정하세요: ");
		scanf("%s", listName[j]);
		printf("%s 한도 입력: ", listName[j]);
		scanf("%d", &limitvalue);
		
		if ((limitvalue > 0) && (limitvalue % 10 == 0)) {
			j++;
		}

		printf("메뉴로 나가시려면 '나가기'를 입력, 추가로 입력하시려면 아무키나 입력 하십시오: ");
		char add[10] = "\0";
		scanf("%s", add);

		if (!strcmp(add, "나가기")) {
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