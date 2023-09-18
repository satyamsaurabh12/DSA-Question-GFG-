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
    Node *curr1=head;
    while(curr1!=NULL && curr1->next!=NULL){
        Node *temp=curr1->next;
        int t=curr1->data;
        curr1->data=temp->data;
        temp->data=t;
        curr1=curr1->next->next;
    }



return 0;

}