// hellog.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <stdlib.h>

int main()
{
	int ab = 1;
	int a[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			a[i][j] = ab++;
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n"); printf("\n");
    return 0;
}

