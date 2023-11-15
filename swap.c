#include <stdio.h>

void swap(int *a, int *b){

	int c = *a;
	*a = *b;
	*b = c;
}

void arrswap(int arr[], int in1, int in2){

	swap(&arr[in1], &arr[in2]);
	
	//int temp = arr[in1];
	//arr[in1] = arr[in2];
	//arr[in2] = temp;
}

int main(){

	int x = 5;
	int y = 7;
	
	printf("Before : x = %d, y = %d\n", x, y);
	
	swap(&x, &y);
	
	//int s = x;
	//x = y;
	//y = s;
	
	printf("After : x = %d, y = %d\n", x, y);
	
	int arr[] = {2,7,2,1};
	
	printf("Before : ");
	
	for(int i = 0;i < 4;i++){
	
		printf("%d\t", arr[i]);
	}
	
	printf("\n");
	
	arrswap(arr, 1, 3);
	
	printf("After  : ");
	
	for(int i = 0;i < 4;i++){
	
		printf("%d\t", arr[i]);
	}
	
	printf("\n");
}
