#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int m, n, i, j, total = 0, minPrimeNum = 0, flag = 1;
	scanf("%d %d", &m, &n);
	for (i = m; i <= n; i++) {
		flag = 1;
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag == 1 && i != 1) {
			if (minPrimeNum == 0)
				minPrimeNum = i;
			total += i;
		}
	}
	if (total != 0)
		printf("%d\n%d", total, minPrimeNum);
	else
		printf("-1");
	return 0;
}