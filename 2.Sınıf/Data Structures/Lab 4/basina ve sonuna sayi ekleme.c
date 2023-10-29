#include <stdio.h>
#include <stdlib.h> //malloc kullandigimiz icin!
/*Write a function that adds all odd numbers to the beginning of the list and all even 
numbers to the end of the list until -1 is entered from the keyboard. */
struct Node{
	int data;
	struct Node* next;
};

// function's behaviour is adding new values. If the value is odd this funtion adds it to the beginnig, else adds it to the end of the list.
void insertNodes(struct Node** head,int value){
	//There is not a list.Yeni bir dugum olusturun.
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); //we created first Node.
	newNode->data = value;
	newNode->next = NULL;
	
	if(*head == NULL){//Liste bossa yeni dugumu listenin basina ekle.
		*head = newNode; //first node is should be head.
	}
	else if(newNode->data % 2 != 0){	//This number is odd so we should add it to the beginnig of the list(head).
		struct Node* current = newNode;
		current->data = value;
		current->next = *head;
		*head = current;	
	}
	else{	//This number is even so we should add it to the end of the list.
		struct Node* current = *head; //The current poiner shows us head of the list.Then we have to go to the end of the list.
		while(current->next != NULL){
			current = current->next;
		} //We're in the end of the list.
		current->next = newNode; // We added the value to the end.
		
	}
}
int main(){
	int value;
	struct Node* head = NULL;
	printf("Enter datas to add the list.(for EXIT -1)\n");	//exit case:-1
	while(1){	// True=1 infinite loop
		scanf("%d",&value);
		if(value ==-1)		break;	//if the number is equal -1 function will stop.
		//Now I call to the function.
		insertNodes(&head,value);
	}
	
	struct Node* current = head;
	printf("Beginning of the list       ");
	while(current != NULL){
		printf("%d=>",current->data);
		current = current->next;
	}
	printf("        End of the list");
}
