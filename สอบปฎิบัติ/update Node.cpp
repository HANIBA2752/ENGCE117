//wuttipat srikham 65543206035-9
//https://www.youtube.com/watch?v=PJoL6qtnuow&ab_channel=WuttipatSrikham
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void UpdateNode(struct Node **ptr,int data,int new_data);
void ShowData(struct Node *ptr);
void AddNode(struct Node **ptr, int data);

int main(){
    struct Node *start;
    start = NULL;
    AddNode(&start,10);
    AddNode(&start,20);
    AddNode(&start,30);
    AddNode(&start,40);
    ShowData(start);
    
    UpdateNode(&start,10,99);
    ShowData(start);
    
    UpdateNode(&start,10,98);
    ShowData(start);
}

void AddNode(struct Node **ptr, int data){
    while(*ptr != NULL){
        ptr = &(*ptr)->next;
    }//endwhile

    *ptr = new struct Node;
    (*ptr)->data = data;
    (*ptr)->next = NULL;
}//endAddNode

void UpdateNode(struct Node **ptr,int data,int new_data){
    while(*ptr != NULL){
        if((*ptr)->data == data){
            break;
        }
        ptr = &(*ptr)->next;
    }
    if((*ptr) != NULL){
        (*ptr)->data = new_data;
    }
}

void ShowData(struct Node *ptr){
    printf("\nData : ");

    while (ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }//endwhile
    printf(" ");
}//endvoidShowData










