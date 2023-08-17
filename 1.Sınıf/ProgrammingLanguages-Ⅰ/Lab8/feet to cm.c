#include <stdio.h>
#include <stdlib.h>

int main(){
	int feet;
	float cm;
	
	printf("cmye cevirmek istediginiz feet degerini giriniz:\n");
	scanf("%d",&feet);
	
	cm = feet * 30.48;
	printf("%d feet %.2f cmdir",feet,cm);
	
	return 0;
}
