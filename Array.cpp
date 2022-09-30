#include<stdio.h>
int main(){
	/*declaring and array and size*/
	int n;
	int arr[n];
	
	/*taking input in array*/
	printf("please enter the size of array\n");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
		for(int i=0;i<n;i++){
		printf(" index %d =%d\n",n,arr[i]);
	}
	
}
