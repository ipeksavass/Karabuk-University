/*Klavyeden bir dairenin yar��ap bilgisi ve i�lem t�r� girildi�inde i�lem t�r� 1 ise dairenin �evresini hesaplan�p yazd�ran 2 girilirse alan�n�n hesaplay�p
yazd�ran, bunlar�n d���ndaki giri�ler i�in �Yanl�� giri�� mesaj� vererek sonlanan program� C dili ile yaz�n�z.*/

#include <stdio.h>
#include <math.h>
#define pi 3.14

int main()
{
	int r, islemTur;
	float cevre, alan;
	printf("Lutfen yaricap bilgisini ve islem turunu (1-cevre 2-alan) giriniz:");
	scanf("%d %d",&r,&islemTur);
	
	if(islemTur == 1){
		cevre = 2 * pi * r;
		printf("dairenin cevresi:%.1f",cevre);
	}
	
	else{
		alan = pi * pow(r,2);
		printf("dairenin alani:%.1f",alan);
	}
	
	
	return 0;
}
