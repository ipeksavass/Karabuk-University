#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Node{  //Dogrusal bagli liste dugum yapisi
	int deger;
	struct Node* sonraki;
};

struct Node* head = NULL;

void karsilastir(int sayilar[],int boyut){
	//Bir liste yok.Yeni bir dugum olusturalim
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); //Ýlk dugumumuzu olusturduk.
	newNode->deger = sayilar[boyut];
	newNode->sonraki = NULL;
	
	if(newNode->deger  >  newNode->sonraki->deger){
		struct Node* current = *head; 
		while(current->sonraki != NULL){
			current = current->sonraki;
		}
	}
	else{
		struct Node* current = newNode;
		current->deger = value;
		current->sonraki = *head;
		*head = current;	
	}
	}
	



int main(){
	int i;
	srand(time(NULL));
	int sayilar[100];
	for(i=0;i<100;i++){
		sayilar[i] = rand() % 1000 + 1;
		karsilastir(sayilar,100);
	}
	

	
}
