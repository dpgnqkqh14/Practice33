#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n, i,j, count = 0, number, flag = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &number);
		flag = 1;
		for (j = 2; j < number; j++) {
			if (number % j == 0) {
				flag = 0;//소수가 아니다
				break;
			}
		}
		if (flag == 1 && number != 1)
			count++;
	}
	printf("%d", count);
	return 0;
}