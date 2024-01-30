#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n, i, count = 0;
	scanf("%d", &n);
	while (n != -1) {
		for (i = 1; i < n; i++) {
			if (n % i == 0) {
				count += i;
			}
		}
		if (count == n) {//¿ÏÀü¼ö
			printf("%d = ", n);
			for (i = 1; i < n; i++) {
				if (n % i == 0) {
					if (i == 1)
						printf("%d ", i);
					else
						printf("+ %d ", i);
				}
			}
			printf("\n");
		}
		else
			printf("%d is NOT perfect.\n", n);

		scanf("%d", &n);
		count = 0;
	}
	return 0;
}