#include<iostream>
#define max 100
using namespace std;

int i , arr[max] , size=0 , num ;

int isFull();
int isEmpty();
void traverse();
void insert_at_beg();
void insert_at_spec();
void insert_at_end();

int main(){
   int choice ;
   
   cout<<"\n Enter How Much Long Array You Want : ";
   cin>>size;
   
   for(i=0; i<size; i++){
   	cin>>arr[i];
   }
   
   do{
	   cout<<"\n Enter What Operations You Want To Perform in Array : ";
	   cout<<"\n Enter 1 for Insert at Begainning : ";
	   cout<<"\n Enter 2 for Insert at Specific Position : ";
	   cout<<"\n Enter 3 for Insert at End : ";
	   cout<<"\n Enter 4 for Traverse : ";
	   cout<<"\n Enter 5 for Exit : ";
	   cout<<"\n Enter : ";
	   cin>>choice;
	   
	   switch(choice){
	   	case 1 :
	   		insert_at_beg();
	   		break;
	   	case 2 :
	   		insert_at_spec();
	   		break;
		case 3 :
	   		insert_at_end();
	   		break;
	   	case 4 :
	   		traverse();	
	   		break;
		case 5 :
	   		cout<<"\n\t Exiting !! "<<endl;
	   		break;
		default :
		    cout<<"\n\t Enter a Valid Choice !! "<<endl;
	   		break;
	   }
   }while(choice!=5);
   
   return 0;
}

int isFull(){
	if(size==max){
		cout<<"\n\t Can't Insert , Array is Full !! "<<endl;
		return 0;
	}
	return 1;
}

int isEmpty(){
	if(size==0){
		cout<<"\n\t Array is Empty !! "<<endl;
		return 0;
	}
	return 1;
}

void traverse(){
	if(isEmpty()){
		cout<<"\n Elements in Array are : \n";
		    for(i=0; i<size; i++){
			cout<<arr[i]<<endl;
		}
	}
}

void insert_at_beg(){
	if(isFull()){
		cout<<"\n Enter a Number to insert at Beganning : ";
		cin>>num;
		for(i=size-1; i>=0; i--){
			arr[i+1] = arr[i] ;
		}
		arr[0] = num ;
		size++;
		traverse();
    }
}

void insert_at_spec(){
	if(isFull()){
		int pos ;
		cout<<"\n Enter a Number to insert at specific Location : ";
		cin>>num;
		cout<<"\n Enter Position : ";
		cin>>pos;
		for(i=size-1; i>=pos-1; i--){
			arr[i+1] = arr[i] ;
		}
		arr[pos-1] = num ;
		size++;
		traverse();
    }
}

void insert_at_end(){
	if(isFull()){
		cout<<"\n Enter a Number to insert at beganning : ";
		cin>>num;
		arr[size] = num ;
		size++;
		traverse();
    }
}
