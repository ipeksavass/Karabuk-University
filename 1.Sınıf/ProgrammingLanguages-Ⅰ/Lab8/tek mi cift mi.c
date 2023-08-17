#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;
	printf("x sayisi icin deger giriniz:");
	scanf("%d",&x);
	
	if(x % 2 == 0)
		printf("x sayisi cifttir.");
	else
		printf("x sayisi tektir.");
	
	return 0;
}
