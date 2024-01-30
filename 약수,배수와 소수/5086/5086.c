#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	/*int fir = -1, sec = -1, factor = 0, multi = 0;
	while (fir != 0 || sec != 0) {
		factor = 0, multi = 0;
		scanf("%d %d", &fir, &sec);
		if (fir == 0 && sec == 0)
			break;
		if ((fir == 0 && sec != 0) || (sec == 0 && fir != 0))
			factor = 0, multi = 0;
		else if (sec % fir == 0) 
			factor = 1;
		else if (fir % sec == 0)
			multi = 1;

		if (factor == 1 && multi == 0)
			printf("factor\n");
		else if (factor == 0 && multi == 1)
			printf("multiple\n");
		else 
			printf("neither\n");
	}*///아래가 더 좋은 코드
	int fir, sec;
	while (1) {
		scanf("%d %d", &fir, &sec);
		if (fir == 0 && sec == 0)
			break;
		if (sec % fir == 0)
			printf("factor\n");
		else if (fir % sec == 0)
			printf("multiple\n");
		else
			printf("neither\n");
	}
	return 0;
}