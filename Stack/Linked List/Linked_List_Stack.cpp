#include<iostream>
#include<stdlib.h>
using namespace std;

struct stack{
	int data ;
	struct stack *next;
};

struct stack *top=NULL , *p , *temp ;

void traverse();
void push();
void pop();

int main(){
   int choice ;
	do{
		cout<<"\n Enter What Operations You Want to Perform on Stack ";
		cout<<"\n Enter 1 for Push ";
		cout<<"\n Enter 2 for Pop ";
		cout<<"\n Enter 3 for Display ";
		cout<<"\n Enter 4 for Exit ";
		cout<<"\n Enter : ";
		cin>>choice;
	switch(choice){
		case 1 :
			push();
		break;	
		case 2 :
			pop();
		break;
		case 3 :
			traverse();
		break;
		case 4 :
			cout<<"\n\t Exiting Successfully !! ";
		break;
		default :
			cout<<"\n\t Enter a Valid Choice !! ";
		break;	
	 }
	}while(choice!=4);
   return 0;
}

void traverse(){
	if(top==NULL){
		cout<<"\n\t Stack is Empty !! ";
		return;
	}
	cout<<"\n Elements in Stack are : \n";
	temp = top ;
	while(temp!=NULL){
		cout<<temp->data<<"\n";
		temp = temp->next ;
	}
}

void push(){
	int num;
	cout<<"\n Enter Number to insert in Stack ";
	cin>>num;
	p = (struct stack *) malloc(sizeof(struct stack));
	p->data = num ;
	p->next = NULL ;
	if(top==NULL){
		top = p ;
	}
	else{
	  p->next = top ;
	  top = p ;
	}
	traverse();
}

void pop(){
	if(top==NULL){
		cout<<"\n\t Stack is Empty !! ";
		return;
	}
	else{
		cout<<"\n Element "<<top->data<<" was popped out Successfully !! ";
		top = top->next ;
	}
	traverse();
}


