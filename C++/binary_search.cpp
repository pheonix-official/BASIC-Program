#include<stdio.h>
int binarysearch(int arr[],int size,int element){
	int low,mid,high;
	low=0;
	high=size-1;
	while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]==element){
			return mid;
		}
		if(arr[mid]<element){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return -1;
}
int main(){
	int arr[10];
	int size,element,index;
	printf("Enter size of array:");
	scanf("%d",&size);
	printf("Enter elements of sorted array:");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
	//Binary Search
	printf("Enter element for search:");
	scanf("%d",&element);
	index=binarysearch(arr,size,element);
	printf("%d present at index:%d",element,index);
	return 0;
}

