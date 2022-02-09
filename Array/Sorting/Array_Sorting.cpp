#include<iostream>
#define max 100
using namespace std;

int i , arr[max] , size=0 , num ;

int isEmpty();
void traverse();
void Sort();

int main(){
	
	
   cout<<"\n Enter How Much Long Array You Want : ";
   cin>>size;
   
   for(i=0; i<size; i++){
   	cin>>arr[i];
   }
   
   cout<<"\n\t Array Before Sorting "<<endl;
   traverse();
   
   Sort();
   
   cout<<"\n\t Array After Sorting "<<endl;
   traverse();
   
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

void Sort(){
	for(i=0; i<size-1; i++){
		for(int j=0; j<size-i-1; j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp ;
			}
		}
	}
}

