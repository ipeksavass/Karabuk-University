/*Klavyeden girilen bir para miktar�n� en az banknot kullanarak olu�turmak istedi�imizde i�inde ka� tane 100, 50, 20 ve 10�luk oldu�unu bulan program� C
dili ile yaz�n�z. Not: Klavyeden girilen para miktar� 10�un katlar� olmal�d�r. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	int yuzluk, ellilik, yirmilik, onluk;
	printf("Lutfen para miktarini giriniz:\n");
	scanf("%d",&a);
	
	yuzluk = a / 100;		a = a % 100;
	ellilik = a / 50;		a = a % 50;
	yirmilik = a / 20;		a = a % 20;
	onluk = a / 10;			a = a % 10;
	
	printf("100luk sayisi:%d\n",yuzluk);
	printf("50lik sayisi:%d\n",ellilik);
	printf("2olik sayisi:%d\n",yirmilik);
	printf("10luk sayisi:%d\n",onluk);
	
	return 0;

}

