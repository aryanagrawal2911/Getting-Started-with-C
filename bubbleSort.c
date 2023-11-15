#include<stdio.h>

void swap(int * , int *);
void printArr(int[] , int);
void bubble(int[] ,int);

int main(){
	int a[] = {6,5,4,3,2,1};
	printf("Before swap : ");
	printArr(a,6);
	bubble(a,6);
	printf("After swap :");
	printArr(a,6);
}

void printArr(int a[], int n){
	for(int i=0; i<n;i++){
		printf("%d",a[i]);
	}
	printf("\n");
}

void swap(int*a , int*b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubble(int arr[] , int n){
	int i,j;
	int swapCount;
	for(int i=0; i<n-1;i++){
		swaoCount = 0;
		for(int j=0; j<n-i;j++){
		
		}
	}
}
