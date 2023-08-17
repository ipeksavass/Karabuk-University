#include <stdio.h>
#include <stdlib.h>

int main()
{
	int r;
	float pi = 3.14, alan;
	
	printf("Lutfen dairenin yaricapini giriniz:\n");
	scanf("%d",&r);
	
	alan = pi * r * r;
	printf("dairenin alani = %.2f",alan);
	
	return 0;
}
