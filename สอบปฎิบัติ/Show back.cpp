//wuttipat srikham 65543206035-9
//https://www.youtube.com/watch?v=PJoL6qtnuow&ab_channel=WuttipatSrikham
#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node *next;
}typedef ayo;

void AddNode(ayo **ptr, int data) ;
void ShowData(ayo *ptr);
void ShowBack(ayo **ptr);

int main(){
	struct Node *start;
	start = NULL;
	AddNode(&start,10);
	AddNode(&start,20);
	AddNode(&start,30);
	AddNode(&start,40);
	ShowData(start);
	ShowBack(&start);
}

void AddNode(ayo **ptr, int data){
	while(*ptr != NULL){
		ptr = &(*ptr)->next;
	}//end while

	*ptr = new struct Node;
	(*ptr)->data = data;
	(*ptr)->next = NULL;
}//end Addnode

void ShowBack(ayo **ptr){
	ayo *Total = NULL ;
	ayo *now = *ptr ; 
	ayo *holder = NULL ;
	while (now != NULL){
		holder = (now)->next ;
		(now)->next = Total ;
		Total = (now) ;
		(now) = holder ; 
	}//end while
	ShowData(Total) ;
	*ptr = Total ;
}//end ShowBack

void ShowData(ayo *ptr){
	printf("Output : ");
	
	while (ptr != NULL){
		printf("%d ", ptr->data);
		ptr = ptr->next;
	}//end while
	printf(" \n");
}//end ShowData


