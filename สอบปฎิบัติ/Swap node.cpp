//wuttipat srikham 65543206035-9
//https://www.youtube.com/watch?v=PJoL6qtnuow&ab_channel=WuttipatSrikham
#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node *next;
};
void AddNode(struct Node **ptr, int data);
void ShowData(struct Node *ptr);
void Swap(struct Node **prt,int b1,int b2);
int main(){
	struct Node *start;
	start = NULL;
	AddNode(&start,10);
	AddNode(&start,20);
	AddNode(&start,30);
	AddNode(&start,40);
	ShowData(start);
	Swap(&start,20,30);
	ShowData(start);
	Swap(&start,40,10);
	ShowData(start);
}

void AddNode(struct Node **ptr, int data){
	while(*ptr != NULL){
		ptr = &(*ptr)->next;	
	}
	*ptr = new struct Node;
	(*ptr)-> data = data;
	(*ptr)-> next = NULL;
}//end AddNode

void ShowData(struct Node *ptr){
	printf("Output : ");
	while(ptr != NULL){
		printf("%d ", ptr -> data);
		ptr = ptr -> next;
	}//end while
	printf(" \n");
}//end ShowData

void Swap(struct Node **ptr,int b1,int b2){
	int a = 0 ;
	struct Node *holder = *ptr ;
	while(holder != NULL){ 
		if(holder->data == b1){
			a++ ;
		}//end if
		else if(holder->data == b2){
			a++ ;
		}//end else if
		holder = holder -> next ;
	}//end while
	if ( a!= 2) return;
	while(*ptr != NULL){
		if((*ptr)->data == b1){
			(*ptr)->data = b2;
		}//end if
		else if((*ptr)->data == b2){
			(*ptr)->data = b1;
		}//end else if
		ptr = &(*ptr)->next;
	}//end while
}










