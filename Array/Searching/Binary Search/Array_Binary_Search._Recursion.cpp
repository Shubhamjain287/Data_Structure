#include<iostream>
#define max 100
using namespace std;

void traverse(int arr[], int &size){
		cout<<"\n Elements in Array are : \n";
		    for(int i=0; i<size; i++){
			cout<<arr[i]<<endl;
		}
}

int BinarySearch(int arr[] , int num , int low , int high){

	int mid = (low+high) / 2 ;
	
	if( high>=low ){
		if(arr[mid] == num)
		   return mid;
		   
		if(num > arr[mid])
			return BinarySearch(arr,num,mid+1,high);
	    
		return BinarySearch(arr,num,low,mid-1);	
	}
	return -1;
}

int main(){
	
   int i , arr[max] , size=0 , num ;
	
   cout<<"\n Enter How Much Long Array You Want : ";
   cin>>size;
   
   for(i=0; i<size; i++){
   	cin>>arr[i];
   }
   
   traverse(arr,size);
   
   cout<<"\n Enter Number for Search : ";
   cin>>num;
   
   cout<<"\n\t Using Recursive Approch !! "<<endl;	
   int res = BinarySearch(arr,num,0,size-1);
   (res==-1) ? cout<<"\n\t Element are Not Found !! " : cout<<"\n\t Element are Found at "<<res+1<<" Position";
   
   return 0;
}

