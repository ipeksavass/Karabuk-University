#include <stdio.h>

int main()
{
	int A,a,sum=0,z;
	printf("Lutfen kontrol etmek istediginiz sayiyi giriniz\n:");
	scanf("%d",&A);
	
	a = A;
	for(;a>0;){
		z = a % 10;
		sum = sum * 10 + z;
		a /= 10;
	}
	
	if(A == sum)
		printf("A polindrom sayidir.");
		
	else
		printf("A polindrom sayi degildir.");
		
	return 0;
}
