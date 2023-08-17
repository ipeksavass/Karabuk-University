#include <stdio.h>
#include <stdlib.h>

int main()
{
	int F;
	float C;
	printf("Lutfen sicakligi F cinsinden giriniz:\n");
	scanf("%d",&F);
	
	C = 0.55 * (F - 32);
	printf("celsius cinsinden:%.1f derece",C);
	
	return 0;
}
