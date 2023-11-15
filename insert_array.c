# include <stdio.h>

void insert(int[], int, int, int);

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
	printf("Enter the element to be inserted : ");
	scanf("%d", &x);
	
	int in;
	printf("Enter the position to be inserted at : ");
	scanf("%d", &in);
	
	insert(arr, n, (in - 1), x);
}

void insert(int arr[], int n, int in, int x){

	int arrc[n + 1];
	int flag = 0;
	
	for(int i = 0;i < n;i++){
	
		if(i != in && flag != 1){
		
			arrc[i] = arr[i];
		}
		
		else if(i == in){
		
			arrc[i] = x;
			flag = 1;
		}
		
		if(flag == 1){
		
			arrc[i + 1] = arr[i];
		}
	}
	
	for(int i = 0;i < n + 1;i++){
	
		printf("%d ", arrc[i]);
	}
	
	printf("\n");
	
}
