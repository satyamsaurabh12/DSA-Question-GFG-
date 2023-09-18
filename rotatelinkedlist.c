#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}Node;
int main(){
    int count=0;
    Node *head=(Node*)malloc(sizeof(Node));
    head->data=1;
    head->next=NULL;
    Node *curr=head;
    for(int i=0;i<7;i++){
        curr->next=(Node*)malloc(sizeof(Node));
        curr=curr->next;
        int a;
        printf("Enter a:");
        scanf("%d",&a);
        curr->data=a;
        curr->next=NULL;
    }
int pos;
printf("Enter the pos:");
scanf("%d",&pos);
curr=head;
Node *temp=head;
for(int i=0;i<pos-1;i++){
    curr=curr->next;
}
head=curr->next;
curr->next=NULL;
curr=head;
while(curr->next!=NULL){
         curr=curr->next;
}
curr->next=temp;
Node *temp1=head;
while(temp1!=NULL){
    printf("%d ",temp1->data);
    temp1=temp1->next;
}
 

return 0;
}