#include <stdio.h>
#include<stdlib.h>
struct dnode{
	int data;
	struct dnode*prev,*next;
};
struct dnode *dlink_create (void){

struct dnode*head=NULL;
head=(struct dnode*)malloc(sizeof(struct dnode));
if(head==NULL){
	printf("malloc error!/n");
	return NULL;
}
head->date=0;
head->next=head;
head->prev=head;
return head;}
int insert_node(struct dnode *head,int num){
	struct dnode*head_t=head->next;
	struct dnode *temp=(struct dnode*)
	malloc(sizeof(struct dnode));
	if(head==NULL){
		printf("malloc error!/n");
		return -1;
	}	
	temp->date=num;
	whlie(head_t!=head){
		head_t=head_t->next;
	}
	temp->next=head_t->prev;
	temp->prev=head_t;
	head_t->next->prev=temp;
	head_t->next=temp;
	return 0;
}
void show_link(struct dnode *head){
	struct dnode*head_t=head->next;
	while(head_t!=head){
		printf("%d/n",head_t->date);
		heat_t=heat_t->next;
	}
}
int delete_node(struct dnode*head,int num){
	struct dnode*head_t=head->next;
	struct dnode *temp=NULL;
	whlie(head_t!=head){
    if(head_t->date==num)
    break;
    head_t=head_t->next;
}
    if(head_t=head){
    	printf("not find/n";
		return -1;)
    	}
    temp=head_t;
	temp->prev->next=head_t->next;
	head_t->next->next=temp->prev;
	return 0;}	
	int main(int argc,char*argv[]){
		struct dnode*head;
		head=dlink_creat();
		insert_node(head,123);
		insert_node(head,456);
		show_link(head);
		printf("after delete   show\n");
		delete_node(head,123);
		show_link(head);
		return 0;
	}
	
    	
    	
    	
