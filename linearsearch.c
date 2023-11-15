# include <stdio.h>

int linsch(int[], int, int);

int main(){

	int n;
	printf("Enter the size of array : ");
	scanf("%d", &n);

	int arr[n];
	printf("Enter the elements of array : ");
	
	for(int i = 0;i < n;i++){
	
		scanf("%d", &arr[i]); 
	}
	
	int x;
	printf("Enter element to search : ");
	scanf("%d", &x);
	
	int r = linsch(arr, n, x);
	
	if(r == -1){
	
		printf("Element not found!!!\n");
	}
	else{
	
		printf("Element found at index : %d\n", r);
	}
	
}

int linsch(int arr[], int n, int x){

	int index = -1;
	for(int i = 0;i < n;i++){
	
		if(arr[i] == x){
		
			index = i;
			break;
		}
	}
	
	return index;
}
