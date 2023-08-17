/*Klavyeden girilen bir para miktarýný en az banknot kullanarak oluþturmak istediðimizde içinde kaç tane 100, 50, 20 ve 10’luk olduðunu bulan programý C
dili ile yazýnýz. Not: Klavyeden girilen para miktarý 10’un katlarý olmalýdýr. */

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

