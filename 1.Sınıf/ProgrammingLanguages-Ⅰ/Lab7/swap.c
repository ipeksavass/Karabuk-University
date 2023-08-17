/*Klavyeden A ve B tamsayi degiskenlerinde tutulan iki sayi giriliyor. A ve B degiskenlerinin degerlerini kebdi arasinda yer degistirerek ekrana yazdiran programı C dili ile yaziniz.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A,B,C;
	printf("Lutfen A ve B icin iki deger giriniz:\n");
	scanf("%d %d",&A,&B);
	C = A;
	A = B;
	B = C;
	printf("A=%d B=%d",A,B);
	
	return 0;
}

