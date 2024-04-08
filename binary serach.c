#include<stdio.h>

int main()
{
	int a[100],i,n,search;
	//get the size of the array
	printf("Enter the size of the array:");
	scanf("%d",&n);
	
	//get the elements 
	printf("Enter the elements:");
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//get the search elements
	printf("Enter the search elements:");
	scanf("%d",&search);
	int result=binarysearch(a,0,n-1,search);
	if(result==-1){
		printf("The search element %d not found.", search);
	}
	else
		printf("The search elements %d is found at the location %d",search,result);
}

int binarysearch(int a,int low,int high, int search){
	while(low<=high){
		int mid= low+(high-low)/2;
		if(a[mid]==search)
			return mid;
		
			if(a[mid]<search)
				low=mid+1;

			else
				high=mid-1;	
	}
return -1;
}
