#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* root,* tail;
void append(){
	struct node* newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(root==NULL){
		root=tail=newnode;
		tail->next=root;
	}
	else{
		tail->next=newnode;
		tail=newnode;
		tail->next=root;
	}
}
void addatbegin(){
	struct node* newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(root==NULL){
		root=tail=newnode;
		tail->next=root;
	}
	else{
		newnode->next=root;
		root=newnode;
	}
}
void addatafter(){
	struct node* newnode,* temp;
	int pos,i=1;
	printf("Enter position");
	scanf("%d",&pos);
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	while(i<pos-1){
		temp=temp->next;
		i++;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}
void display(){
	struct node* temp;
	temp=root;
	while(temp->next!=root){
		printf("%d-->",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);
}
void delete(){
   struct node* temp;
	int loc;
	printf("Enter location to delete");
	scanf("%d",&loc);
	if(loc>length()){
		printf("Invalid location");
	}
	else if(loc==1){
		temp=root;
		root=temp->next;
		temp->next=NULL;
		free(temp);
	}
	else{
		struct node* p=root,*q;
		int i=1;
		while(i<loc-1){
		  p=p->next;
		  i++;	
		}
		q=p->next;
		p->next=q->next;
		q->next=NULL;
		free(q);
	}	
}
void reverse(){
	
}
void quit(){
	
}
int length(){
	struct node* temp;
	int c;
	temp=root;
	while(temp->next!=root){
		c++;
		temp=temp->next;
	}
	printf("length is %d\n",c+1);
}
void main(){
	int ch;
	while(1){
		printf("1.Append\n2.Addatbegin\n3.Addatafter\n4.length\n5.display\n6.delete\n7.reverse\n8.quit\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:append();
			       break;
			case 2:addatbegin();
			       break; 
			case 3:addatafter();
			       break;
			case 4:length();
			       //printf("length=%d\n",len);
			       break;
			case 5:display();
			       break;
			case 6:delete();
			       break;
			case 7:reverse();
			       break;       
			case 8:quit();
			       break;
			default:printf("invalid");	   	   	   	   	         
		}
		
	}
}

