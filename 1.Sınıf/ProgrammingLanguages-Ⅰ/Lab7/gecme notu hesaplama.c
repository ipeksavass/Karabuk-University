/*Klavyeden bir öðrenci için öðrenci no, vize ve final girildiðinde, öðrencinin vize notunun %40’ý ve final notunun %60’ý alarak geçme notunu hesaplayan
ve öðrencinin numarasý ile birlikte ekrana sonucu yazdýran programý C dili ile yazýnýz.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num,v_not,f_not;
	float gecmeNotu;
	printf("ogrencinin numarasini,vize ve final notlarini giriniz:\n");
	scanf("%d %d %d",&num,&v_not,&f_not);
	
	gecmeNotu = v_not * 0.4 + f_not * 0.6;
	printf("%d numarali ogrencinin gecme notu = %.2f",num,gecmeNotu);
	
	return 0;
}
