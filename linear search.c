#include<stdio.h>

int main(){
	int i,search,n,a[100];
	
	//get size of the array
	printf("Enter the size of the array:");
	scanf("%d",&n);
	
	//get the elements of the array
	prinf("Enter the elements:");
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	//get the search elements
	printf("Enter the search element:");
	scanf("%d", &search);
	
	//linear search
	for(i=0;i<n;i++){
		if(a[i]==search){
			printf("The element %d is found at the location %d", search, i+1);
		}
	}
	if(i==n){
		printf("The search element %d is not found in the array.",search);
	}
}
