#include <stdio.h>
#include <stdlib.h>

int main()
{
	int temp;
	printf("Lutfen sicaklik degeri giriniz:\n");
	scanf("%d",&temp);
	
	if(temp > 0)
		printf("donma sicakliginin uzerinde.");
	else if(temp < 0)
		printf("donma sicakliginin altindadir.");
	else
		printf("donma sicakligindadir.");
		
	return 0;
	
}
