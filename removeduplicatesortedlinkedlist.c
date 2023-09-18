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
    Node *curr=head;
    while(curr!=NULL && curr->next!=NULL){
        if(curr->data==curr->next->data){
            Node *temp=curr->next;
            curr->next=curr->next->next;
            free(temp);
        }
        else{
            curr=curr->next;
        }
    }



return 0;
}