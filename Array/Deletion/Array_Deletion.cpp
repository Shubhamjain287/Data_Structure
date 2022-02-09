#include<iostream>
#define max 100
using namespace std;

int i , arr[max] , size=0 , num ;

int isEmpty();
void traverse();
void deletion_at_beg();
void deletion_at_spec();
void deletion_at_end();

int main(){
   int choice ;
   
   cout<<"\n Enter How Much Long Array You Want : ";
   cin>>size;
   
   for(i=0; i<size; i++){
   	cin>>arr[i];
   }
   
   do{
	   cout<<"\n Enter What Operations You Want To Perform in Array : ";
	   cout<<"\n Enter 1 for deletion at Begainning : ";
	   cout<<"\n Enter 2 for deletion at Specific Position : ";
	   cout<<"\n Enter 3 for deletion at End : ";
	   cout<<"\n Enter 4 for Traverse : ";
	   cout<<"\n Enter 5 for Exit : ";
	   cout<<"\n Enter : ";
	   cin>>choice;
	   
	   switch(choice){
	   	case 1 :
	   		deletion_at_beg();
	   		break;
	   	case 2 :
	   		deletion_at_spec();
	   		break;
		case 3 :
	   		deletion_at_end();
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

void deletion_at_beg(){
	if(isEmpty()){
	    cout<<"\n\t Element "<<arr[0]<<" Was Deleted Successfully !! ";
		for(i=0; i<size; i++){
			arr[i] = arr[i+1] ;
		}
		size--;
		traverse();
	}	
}

void deletion_at_spec(){
	if(isEmpty()){
		int pos ;
		cout<<"\n Enter Position for Which you Want to delete : ";
		cin>>pos;
		cout<<"\n\t Element "<<arr[pos-1]<<" Was Deleted Successfully !! ";
		for(i=pos-1; i<size; i++){
			arr[i] = arr[i+1] ;
		}
		size--;
		traverse();
	}
}

void deletion_at_end(){
	if(isEmpty()){
	    cout<<"\n Element "<<arr[size-1]<<" Was Deleted Successfully !! ";
		size--;
		traverse();
	}
}
