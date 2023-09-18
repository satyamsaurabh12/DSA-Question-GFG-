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
    printf("Now for the second sorted linked list is:\n");
    Node *head1=(Node*)malloc(sizeof(Node));
    head1->data=12;
    head1->next=NULL;
    Node *curr2=head1;
    for(int i=0;i<5;i++){
        curr2->next=(Node*)malloc(sizeof(Node));
        curr2=curr2->next;
        int a;
        printf("Enter a:");
        scanf("%d",&a);
        curr2->data=a;
        curr2->next=NULL;
    }
    Node *set=head;
    Node *set1=head1;
    while(set!=NULL && set1!=NULL){
             if(set->data>set1->data){
                
             }
    }








}