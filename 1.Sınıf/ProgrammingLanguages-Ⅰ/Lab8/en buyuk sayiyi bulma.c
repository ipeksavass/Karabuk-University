#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a=3,b=9,c=7;
	
	if(a>b){
		if(a>c)
			printf("a en buyuk sayidir.");
		else
			printf("c en buyuk sayidir.");
	}
	else if(b>c)
		printf("b en buyuk sayidir.");
	else
		printf("c en buyuk sayidir.");
		
	return 0;
	
}
