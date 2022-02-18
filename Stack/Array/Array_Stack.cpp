#include<iostream>
#define max 50
using namespace std;

int stack[max] , i , top=-1 ;

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
	if(top==-1){
		cout<<"\n\t Stack is Empty !! ";
		return;
	}
	cout<<"\n Elements in Stack are : \n";
	for(int i=top; i>=0; i--){
		cout<<stack[i]<<"\n";
	}
}

void push(){
	if(top==max){
		cout<<"\n\t Stack is Full !! ";
		return;
	}
	else{
		int num ;
		cout<<"\n Enter Number to insert in Stack : ";
		cin>>num;
		top++;
		stack[top] = num ;
	}
	traverse();
}

void pop(){
	if(top==-1){
		cout<<"\n\t Stack is Empty !! ";
		return;
	}
	else{
		cout<<"\n Element "<<stack[top]<<" was popped Successfully !! ";
		top--;
	}
	traverse();
}
