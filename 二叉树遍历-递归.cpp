#include<iostream>
using namespace std;
struct node{
	int date;
	struct node *lchild;
	struct node *rchild;
	node(int value):date(value),lchild(NULL),rchild(NULL){ 
	};
};

void pre(node *head){  
	if(head==NULL)
	return ;
	cout<<head->date<<" ";
	pre(head->lchild);
	pre(head->rchild); 	
}

void in(node *head){   
	if(head==NULL)
	return ;
	in(head->lchild);
	cout<<head->date<<" ";
	in(head->rchild);
}
 
void po(node *head){   
	if(head==NULL)
	return ;
	po(head->lchild);
	po(head->rchild);
	cout<<head->date<<" ";
}
int main(void){
	node *n1=new node(1);
	node *n2=new node(2);
	node *n3=new node(3);
	node *n4=new node(4);
	node *n5=new node(5);
	n1->lchild=n2;
	n1->rchild=n3;
	n2->lchild=n4;
	n2->rchild=n5;
	pre(n1);    
	cout<<endl;
	in(n1);  
	cout<<endl;
	po(n1);  
	cout<<endl;
	delete n1;
	delete n2;
	delete n3;
	delete n4;
	delete n5;
	return 0;
}
