#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, faktoriyel=1;
	
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		faktoriyel = faktoriyel * i;
	}
	
	printf("n! = %d",faktoriyel);
	
	return 0;
}
