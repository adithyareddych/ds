/*
printing alternate nodes in the list

Sample Testcase:
Enter  the number of nodes:5                                                                                            
Input data nodes:90                                                                                                     
Input data nodes:54                                                                                                     
Input data nodes:75                                                                                                     
Input data nodes:63                                                                                                     
Input data nodes:41                                                                                                     
Data entered in the list:90     54      75      63      41                                                              
alternate nodes in the list :90 75      41 



*/
#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node* next;
};
struct node* head=NULL;
void main(){
    int i,n;
    printf("Enter  the number of nodes:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        struct node* temp;
        temp=(struct node*)malloc(sizeof(struct node));
        printf("Input data nodes:");
        scanf("%d",&temp->data);
        if(head==NULL){
            head=temp;
        }
        else{
            struct node* p;
            p=head;
            while(p->next!=NULL){
                p=p->next;
            }
            p->next=temp;
        }
    }
    struct node* q,* s;
    q=head;
    s=head;
    int c=0;
    printf("Data entered in the list:");
    while(s!=NULL){
      printf("%d      ",s->data);
      s=s->next;
    }
    printf("\n");
    printf("alternate nodes in the list :");
        while(q!=NULL){
        if(c%2==0){
            printf("%d      ",q->data);
        }
        q=q->next;
        c++;
    }
  return 0;
}
