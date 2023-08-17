/*Klavyeden bir dairenin yarýçap bilgisi ve iþlem türü girildiðinde iþlem türü 1 ise dairenin çevresini hesaplanýp yazdýran 2 girilirse alanýnýn hesaplayýp
yazdýran, bunlarýn dýþýndaki giriþler için “Yanlýþ giriþ” mesajý vererek sonlanan programý C dili ile yazýnýz.*/

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
