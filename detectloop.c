#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}Node;
int main(){
    Node *head=(Node*)malloc(sizeof(Node));
    head->data=12;
    head->next=NULL;
    Node *curr=head;
    for(int i=0;i<5;i++){
        curr->next=(Node*)malloc(sizeof(Node));
        curr=curr->next;
        int a;
        printf("Enter a:");
        scanf("%d",&a);
        curr->data=a;
        curr->next=NULL;
    }
  Node *fast=head;
Node *slow=head;
int count=0;
while(fast!=NULL && fast->next!=NULL){
    fast=fast->next->next;
    slow=slow->next;
    count++;
    if(slow==fast){
        break;
    }
}
printf("the length of loop:%d",count);



return 0;

}