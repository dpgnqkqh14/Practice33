#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n, k, i, count = 0;
	scanf("%d %d", &n, &k);
	for (i = 1; i <= n; i++) {
		if (count == k)
			break;
		if (n % i == 0)
			count++;
	}
	if (count < k)
		printf("0");
	else
		printf("%d", i - 1);
	return 0;
}