/*Klavyeden bir ��renci i�in ��renci no, vize ve final girildi�inde, ��rencinin vize notunun %40�� ve final notunun %60�� alarak ge�me notunu hesaplayan
ve ��rencinin numaras� ile birlikte ekrana sonucu yazd�ran program� C dili ile yaz�n�z.*/

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
