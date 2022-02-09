#include<iostream>
#define max 100
using namespace std;

int i , arr[max] , size=0 , num ;

int isEmpty();
void traverse();
int LinearSearch(int n){
	for(i=0; i<size; i++){
		if(arr[i] == n){
			return i ;
		}
	}
	return -1;
}

int main(){
	
	
   cout<<"\n Enter How Much Long Array You Want : ";
   cin>>size;
   
   for(i=0; i<size; i++){
   	cin>>arr[i];
   }
   
   traverse();
   
   cout<<"\n Enter Number for Search : ";
   cin>>num;
   
   int res = LinearSearch(num);
   (res==-1) ? cout<<"\n\t Element are Not Found !! " : cout<<"\n\t Element are Found at "<<res+1<<" Position";
   
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

