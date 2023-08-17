//Klavyeden girilen iki sayinin toplamini hesaplayip ekrana yazdiran programi C dili ile yaziniz.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,sum;
	printf("a ve b icin deger giriniz:\n");
	scanf("%d %d",&a,&b);
	sum = a + b;
	printf("iki sayinin toplami:%d",sum);
	
	return 0;
}
