# include <stdio.h>

void insert(int[], int, int, int);

int main(){

	int n;
	printf("Enter the size of array : ");
	scanf("%d", &n);

	int arr[n];
	printf("Enter the elements of array : ");
	
	for(int i = 0;i < n - 1;i++){
	
		scanf("%d", &arr[i]); 
	}
	
	int x;
	printf("Enter the element to be inserted : ");
	scanf("%d", &x);
	
	int in;
	printf("Enter the index to be inserted at : ");
	scanf("%d", &in);
	
	insert(arr, n, in, x);
}

void insert(int arr[], int n, int in, int x){

	int i = n - 1;
	
	while(i > in){
	
		arr[i] = arr[i - 1];
		i -= 1;
	}
	
	if(i == in){
	
		arr[i] = x;
	}
	
	
	for(int i = 0;i < n;i++){
	
		printf("%d ", arr[i]);
	}
	
	printf("\n");
	
}
