#include<stdio.h>
#include<stdlib.h>
struct Node{
	int date;
	struct Node*next;
};
struct Node*circular_create(void){
	struct Node*head;
	head=(struct Node*)malloc(sizeof(struct Node));
	head->next=head;
	head->date=0;
	return head;
}
int insert_node(struct Node*head,int num){
	struct Node*new_node=NULL;
	struct Node*temp=head;
	new_node=(struct Node*)malloc(sizeof(struct Node));
	if(new_node==NULL){
		printf("malloc error!\n");
		return -1;
	}
	new_node->data=num;
	while(temp->head){
		temp=temp->next;
	}
	temp->next=new_node;
	new_node->next=head;
	return 0;
}
int show_lish(struct Node*head){
	struct Node*temp=head->next;
	if(temp->next==head){
		printf("empty list.\n");
		return 0;
	}
	while(temp!=head){
		printf("%d\n",temp->date);
		temp=temp->next;
	}
	return 0;
}
int main(int argc,char*argv[ ]){
	struct Node*head;
	head=circular_create( );
	insert_node(head,123);
	insert_node(head,456);
	insert_node(head,789);
	show_list(head);
}
